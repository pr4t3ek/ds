#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];

int top=-1;

void push(int x);
void pop();
void display();

void push(int x){
    if(top==size-1){
        printf("stack is full\n");
    }
    else{
        stack[++top]=x;
    }
}

void pop(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        int del;
        del=stack[top--];
        printf("deleted elemnt is %d\n",del);
    }
}

void display(){
    if(top==-1){
    printf("stack empty\n");
    }
    else{
        int i;
        for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
        printf("\n");
    }
}

void main(){
    int ch,x;
    for(;;){
        printf("1 to push 2 to pop 3 display 4 exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter element to enq\n");
            scanf("%d",&x);
            push(x);
            break;
           
            case 2:
            pop();
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