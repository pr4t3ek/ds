#include<stdio.h>
#include<stdlib.h>

struct Node 
{ 
  int data; 
  struct Node *next; 
}*head;
struct Node *head=0;
void insert(int x);
void insertbw(int x);
void insertend(int x);
void printdisplay();


void main(){
    
insert(5);
insert(8);
insert(9);
insertbw(7);
insertend(1);
printdisplay();


}

void insert(int x){

struct Node *new=(struct Node*)malloc(sizeof(struct Node));

    new->data=x;
    new->next=head;
    head=new;
}

void printdisplay()
{struct Node *temp;                //not directly use head as will loose refernce
temp=head;
    
    while(temp!=0){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
}

void insertbw(int x){
    struct Node *temp;
    temp=head;
    while(temp->data!=8){
       temp=temp->next;
    }
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    new->data=x;
    new->next=temp->next;
    temp->next=new;
}

void insertend(int x){
    struct Node *temp;
    temp=head;
    while(temp->next!=0){
         temp=temp->next;
    }
        struct Node *new=(struct Node*)malloc(sizeof(struct Node));
        new->data=x;
        new->next=0;
        temp->next=new;

}