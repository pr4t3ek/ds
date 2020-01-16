#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *top=0;


void push(int x){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=x;

    if(top==0){
    top=new_node;
    new_node->next=top;
    }
else{
    struct Node *temp=top;
      new_node->next=top;
      do{
          temp=temp->next;
      }  
    while(temp->next!=top);
    top=new_node;
    temp->next=top;

}
}

void pop(){
    if(top==0){
        printf("empty\n");
        return;
    }
else{
    struct Node*temp=top;
    do{
        temp=temp->next;
    }
    while(temp->next!=top);                //last node
    struct Node *temp2=top;
    top=temp2->next;
    temp->next=top;
    printf("value freed is %d",temp2->data);
free(temp2);
}
}

void display(){
    if(top==0){
        printf("empty \n");
    }
    else{
        struct Node *temp=top;

        do{
            printf("%d \t",temp->data);
            temp=temp->next;
        }
        while(temp!=top);
    }
}

void main(){
    int ch,num;
    for(;;){
        printf("1 push 2 pop 3 display  exit \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter number to enter \n");
            scanf("%d",&num);
            push(num);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);

        }
    }
}

