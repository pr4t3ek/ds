#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next
};
int size=0;
struct Node *insert(struct Node*head,int position);
struct Node *delete(struct Node*head,int position);         //fix links and free space
void display(struct Node*head);
void main(){
    int position,ch;
    struct Node *head=0;               //always stores address of first node so when fn exit still has to remain.
    for(;;){
    printf("enter 1.insert 2.delete 3.display 4.exit\n");
    scanf("%d",&ch);
    
    switch(ch){
        case 1:
        printf("which position to insert\n");
        scanf("%d",&position);
        head=insert(head,position);
        break;
        case 2:
        printf("which position to delete\n");
        scanf("%d",&position);
        head=delete(head,position);
        break;
        case 3:
        display(head);
        break;
        case 4:
        exit(0);
        break;
        default :
        printf("invalid input\n");
    }
    }

}

struct Node *insert(struct Node*head,int position){
    int x;
    if(position>size+1||position<=0){
        printf("\n not possible\n");
        return head;
    }
    if(position==1){
        struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
        printf("enter value to enter\n");
        scanf("%d",&x);
        new_node->data=x;
        new_node->next=head;
        head=new_node;
        size++;
        return head;
    }
    else {
        struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
        printf("enter value to enter\n");
        scanf("%d",&x);
        new_node->data=x;
        int i;
        struct Node *temp;
        temp=head;
        for(i=1;i<position-1;i++){
            temp=temp->next;
        }
new_node->next=temp->next;
temp->next=new_node;
size++;
return head;
    }
    }
void display(struct Node *head){
    if(head==0){
        printf("empty list\n");
        return;
    }
    while(head!=0){       //not head->next as would check the next part so wont print last node.
        printf("%d \t",head->data);
        head=head->next;
    }
    printf("\n");
}

struct Node *delete(struct Node*head,int position){
    if(position>size||position<0){
    printf("invalid position\n");
    return head;
    }
    if(position==1){
        struct Node *temp=head;
        head=temp->next;
        free(temp);
        size--;
        return head;
    }
    else{
        struct Node *temp1=head;
        int i;
        for(i=1;i<position-1;i++)
            temp1=temp1->next;
        struct Node *temp2=temp1->next;   //pointing at node to delete
        temp1->next=temp2->next;
        printf("the value freed is %d\n",temp2->data);
        free(temp2);
        size--;
        return head;
    }
}


