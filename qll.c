#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *front=0;
struct Node *rear=0;

void enQ(int x){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next=0;
    if(front==0&&rear==0){                                         //1st node
        front=new_node;
        rear=new_node;
    }
    else{
        rear->next=new_node;
        rear=new_node;
    }
}

void deQ(){
    if(front==0){                //no node
    printf("empty que\n");
    return;
}
if(front==rear){ 
    struct Node *temp=front;                //single node
    front=0;
    rear=0;
    free(temp);
}
else{
struct Node *temp=front;
front=front->next;
free(temp);
}}

void display(){
    struct Node *temp=front;
    while(temp!=0){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    int ch,x;
    for(;;){
        printf("1 to enq 2 deq 3 display 4 exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter elemnt to push\n");
            scanf("%d",&x);
            enQ(x);
            break;
            case 2:
            deQ();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
        }
    }
}