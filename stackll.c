#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top=0;

void push(int x){
    struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next=top;
    top=new_node;
}

void pop(){
    if(top==0){
        printf("empty stack\n");
        return;
    }
    else{
        struct Node *temp=top;
        top=top->next;
        printf("element freed is %d\n",temp->data);
        free(temp);
    }
}

void display(){
    if(top==0){
    printf("empty \n");
    return;
    }
    else{
        struct Node *temp=top;
        while(temp!=0){
           printf("%d\t",temp->data);
           temp=temp->next; 
        }
        printf("\n");
    }
}

void main(){
    int ch,x;
    for(;;){
        printf("1 to push 2 pop 3 display 4 exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter elemnt to push\n");
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