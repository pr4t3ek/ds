#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int Q[SIZE];
int front=-1;
int rear=-1;

void enQ(int num);
void deQ();
void display();

void enQ(int num){
    if(rear==SIZE-1){
        printf("q is full\n");
        return;
    }
else{
    if(front==-1)
    front=0;
    Q[++rear]=num;
}
}

void deQ(){
    if(front==-1||front>rear){
        printf("empty q\n");
    }
    else{
        int del;
        del=Q[front++];
        printf("deleted is %d\n",del);
        if(front>rear){
            front=-1;
            rear=-1;
        }
}
}

void display(){
    if(front==-1||front>rear){
        printf("q is empty\n");
    }
    else{
        int i;
        for(i=front;i<=rear;i++)
        printf("%d\t",Q[i]);
        printf("\n");
    }
}

void main(){
    int ch,x;
    for(;;){
        printf("1 to enq 2 to deq 3 display 4 exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter element to enq\n");
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