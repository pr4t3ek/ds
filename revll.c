#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next
    };

int size=0;
struct Node *insert(struct Node*head,int position);
void display(struct Node*head);
struct Node *reverse(struct Node*head);


void main(){
    int position,ch;
    struct Node *head=0;               //always stores address of first node so when fn exit still has to remain.
   while(1){
        printf(" press 1 to insert press -1 to stop inserting");
        scanf("%d",&ch);
        if(ch==-1)
        break;
        else{
            printf("which position to insert\n");
        scanf("%d",&position);
        head=insert(head,position);
        }
   }
printf("non reversed link list is\n");
display(head);
printf("\n");
printf("rversed ll is \n");
head=reverse(head);
display(head);
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

struct Node *reverse(struct Node *head){
    struct Node *next,*prev,*current;
    current=head;
    prev=0;
    while(current!=0){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}