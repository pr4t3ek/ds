#include<stdio.h>
#include<stdlib.h>
struct bst{
    int data;
    struct bst *left;
    struct bst *right;
};


struct bst *create(int data){
    struct bst *new_node=(struct bst*)malloc(sizeof(struct bst));
    new_node->data=data;
    new_node->left=0;
    new_node->right=0;
    return new_node;
}

struct bst *insert(struct bst *root,int data){
    if(root==0){
        root=create(data);
        return root;
    }
   else if(data<=root->data){
        root->left=insert(root->left,data);
        return root;   
    }
else{
        root->right=insert(root->right,data);
        return root;
}


}

void display(struct bst *root,int i){
int j;
if(root!=0){
display(root->right,i+1);
for(j=1;j<=i;j++)
printf("\t");
printf("%d \n",root->data);
display(root->left,i+1);
}}

void preorder(struct bst *root){
    if(root!=0){
        printf("%d \t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct bst *root){
    if(root!=0){
        inorder(root->left);
        printf("%d \t",root->data);
        inorder(root->right);
    }
}

void postorder(struct bst *root){
    if(root!=0){
        postorder(root->left);
        postorder(root->right);
        printf("%d \t",root->data);
    }
}

void main(){
    struct bst *root=0;
    int data;
    int ch;
    for(;;){
    printf("enter 1 to insert 2 to display 3 pre 4 inordr 5 postordr\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter data to enter\n");
        scanf("%d",&data);
        root=insert(root,data);
        break;
        case 2:
        display(root,1);
        break;
        case 3:
        preorder(root);
        break;
        case 4:
        inorder(root);
        break;
        case 5:
        postorder(root);
        break;
        case 6:
        exit(0);
    }
}
}

