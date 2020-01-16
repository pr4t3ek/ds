#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *insert(struct Node *head);
void display(struct Node *head);

struct Node *insert(struct Node *head){
    int x;
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data to enter\n");
    scanf("%d",&x);
    new_node->data=x;
    new_node->next=0;

    if(head==0){                        //firwst
        head=new_node;
        return head;
    }

    else if(new_node->data>head->data){                      //bigger than head
        new_node->next=head;
        head=new_node;
        return head;
    }
    else{                                                   //between
    struct Node *temp=head;
    struct Node *prev;
    while(temp!=0&&temp->data>=new_node->data){
        prev=temp;
        temp=temp->next;
    }
    prev->next=new_node;
    new_node->next=temp;
    return head;
    }
}

void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    int ch;
    struct Node *head=0;
    for(;;){
        printf("1 to insert 2 to display 3 exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            head=insert(head);
            break;
            case 2:
    display(head);
    break;
            case 3:
            exit(0);
            break;
        }
    }
}