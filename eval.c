#include<stdio.h>
#include<string.h>
#include<math.h>
 int stk[20];

void push(int element,int *top){
    (*top)++;
    stk[(*top)]=element;
}

int pop(int *top){
    int del;
    del=stk[(*top)];
    (*top)--;
    return del;
}

int operation(char c,int j,int k){
    switch(c){
        case '+':
        return(j+k);
        case'-':
        return(j-k);
        case '*':
        return(j*k);
        case'/':
        return(j/k);
    }
}



void main(){
     int top=-1;
     int i,j,k,result;
     char c;
     char postfix[20];
     printf("enter valid postifx exp\n");
     scanf("%s",postfix);

     for(i=0;i<strlen(postfix);i++){
            c=postfix[i];
            if(isdigit(c)){
                push(c-'0',&top);
            }
            else{
                k=pop(&top);
                j=pop(&top);
            result=operation(c,j,k);
            push(result,&top);
            }
     }
     result=pop(&top);
     printf("the final result is %d",result);
 }
