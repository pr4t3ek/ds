#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
int size=0;
struct Node *insert(struct Node*head,int position);
struct Node *delete(struct Node*head,int position);         //fix links and free space
void display(struct Node*head);
void revdisplay(struct Node *head);
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
        case 5:
        revdisplay(head);
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
    else if(position==1&&head==0){     //empty list first insert
        struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
        printf("enter value to enter\n");
        scanf("%d",&x);
        new_node->data=x;
        new_node->next=head;
        new_node->prev=0;
        head=new_node;
        size++;
        return head;
    }
  else  if(position==1&&head!=0){       //already existing 
        struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
        printf("enter value to enter\n");
        scanf("%d",&x);
        new_node->data=x;
        new_node->next=head;
        new_node->prev=0;
        head->prev=new_node;                     //as new first node.
        head=new_node;
        size++;
        return head;
    }
    
    else if(position==(size+1)&&head!=0){         //inserting last node
            struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
        printf("enter value to enter\n");
        scanf("%d",&x);
        new_node->data=x;
        struct Node *temp=head;
        int i;
        for(i=1;i<position-1;i++)
        temp=temp->next;                                  //2nd last node.

        new_node->next=0;
        temp->next=new_node;
        new_node->prev=temp;
        size++;
        return head;
    }
    else {
        struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
        printf("enter value to enter\n");
        scanf("%d",&x);
        new_node->data=x;
        int i;
        struct Node *temp=head;
        
        for(i=1;i<position-1;i++)
            temp=temp->next;
        
new_node->next=temp->next;
temp->next=new_node;
new_node->prev=temp;
new_node->next->prev=new_node;
size++;
return head;
    }
    }


struct Node *delete(struct Node*head,int position)    
{      if(position>size||position<=0){
    printf("invalid postion\n");
        return head;
}
else if(position==1){              //first node
    struct Node *temp=head;
    head=temp->next;
                                   //head->prev=0; gives segmentation fault.
    free(temp);
    size--;
    return head;
}
 else if(position==size&&position!=1){    //last node
    struct Node *temp=head;
    int i;
    for(i=1;i<position;i++){         //go to last.
        temp=temp->next;
    }
    temp->prev->next=0;
    free(temp);
    size--;
    return head;
}
else {
    struct Node *temp=head;
    int i;
    for(i=1;i<position;i++){             //go to node to delete
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
    size--;
    return head;
}
}

void display(struct Node *head){
    while(head!=0){
        printf("%d \t",head->data);
        head=head->next;
    }
    printf("\n");
}



void revdisplay(struct Node *head){
    if(head==0){
    printf("empty\n");
    return;}

else{

    while(head->next!=0){
        head=head->next;
    }
    printf("\n");
    while(head!=0){
        printf("%d \t",head->data);
        head=head->prev;
    }
    printf("\n");
}
}