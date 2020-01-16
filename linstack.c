#include<stdio.h>
#include<stdlib.h>
int top=-1;
#define SIZE 5
void push(int arr[],int num){
    if(top==SIZE-1){
    printf("stack overflow\n");
    return;
    }
    else{
    arr[++top]=num;
    return;
    }
    }

void pop(int arr[]){
    if(top==-1){
        printf("stack underflow\n");
        return;
    }
    else{
        int del=arr[top--];
        printf("popped element is %d",del);
        return;
    }
}

void display(int arr[]){
    if(top==-1){
        printf("stack empty");
        return;
    }
    else{
        int i;
        for(i=top;i>=0;i--)
        printf("%d ",arr[i]);
    }
}

void main(){
    int stk[SIZE];
    int ch,num;
    for(;;){
    printf("\npress 1 to push 2 pop 3 display 4 exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter element to push\n");
        scanf("%d",&num);
        push(stk,num);
        break;
        
        case 2:
        pop(stk);
        break;

        case 3:
        display(stk);
        break;

        case 4:
        exit(0);
        break;

        default:
        printf("invalid input\n");
    }


}
}