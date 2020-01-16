
#include <stdio.h>
#include<stdlib.h>

struct bt
{
    int data;
    struct bt *left;
    struct bt *right;
    
};

struct bt *root=0;




struct bt *create()
{
    int m; struct bt *new_node;
    
    printf("\n Press -1 if you dont want to enter data ");
    scanf("%d", &m); //Remove '&' To DEMO Segmentation Fault
    
    if(m == -1) return NULL;
    else
    {
        new_node = (struct bt *)malloc(sizeof(struct bt));
        new_node->data = m; 
        new_node->left = NULL; 
        new_node->right =NULL;
        printf("\n Enter Marks for LEFT node of %d ", new_node->data);
        
        new_node->left = create();
        
        printf("\n Enter Marks for RIGHT node of %d ", new_node->data);
        
        new_node->right = create();
    
        return new_node;
    }
    
}
void display(struct bt *root,int i)
{
    int j;
    
    
    if(root !=NULL)
    {display(root->right,i+1);
        
        for(j=1;j<=i;j++) 
        printf("\t"); 
        
        printf("%d \n",root->data);
        display(root->left,i+1);
    }
    
}//end display

int main()
{
    root = create();
    
    printf("\n Displaying....\n");
    if(root == NULL)
        printf("\n root does not exist - Tree not created\n");
    else if ((root->left == NULL && root->right != NULL))
        printf("\n Tree is Right SKEWED\n");
    else if((root->right == NULL && root->left != NULL))
        printf("\n Tree is Left SKEWED\n");
    
    printf("pre order is \n");
    preorder(root);
    printf("inorder is \n");
    inorder(root);
    printf("post order is \n");
    postorder(root);
    
}








void preorder(struct bt *temp){
    
    if(temp!=0){
        
        printf("%d \t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
  
}

void inorder(struct bt *temp){
    if(temp!=0){
        
        inorder(temp->left);
        printf("%d \t",temp->data);
        inorder(temp->right);
    }
    
}

void postorder(struct bt *temp){
    
    if(temp!=0){
        
        postorder(temp->left);
        postorder(temp->right);
        printf("%d \t",temp->data);
    }

}


//do again