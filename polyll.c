#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Node{
    int coeff;
    int pow;
    struct Node *next;
};

int c,p;

struct Node*create(struct Node *next){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->coeff=c;
    new_node->pow=p;
    new_node->next=next;
    return new_node;
}

struct Node *insert(struct Node *head){
    if(head==0||head->pow<=p){                              //first or most power
        head=create(head);
        return head;
    }
    else{
        struct Node *temp=head;
        while(temp->next!=0&&temp->next->pow>p)
        temp=temp->next;

        temp->next=create(temp->next);
        return head;
    }
}

void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=0){
        printf("%dx^%d+ ",temp->coeff,temp->pow);
        temp=temp->next;
    }
    printf("0\n");
}

void eval(struct Node *head){
    int x,sum=0;
    struct Node *temp=head;
    printf("enter value of x\n");
    scanf("%d",&x);
    while(temp!=0){
        sum=sum+temp->coeff*pow(x,temp->pow);
        temp=temp->next;
    }
    printf("the result is %d\n",sum);
}

void main(){
    struct Node *head=0;
    int ch;
    for(;;){
        printf("1 insert 2 eval 3 display 4 exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter value of coeff and power\n");
            scanf("%d%d",&c,&p);
            head=insert(head);
            break;
            case 2:
            eval(head);
            break;
            case 3:
            display(head);
            break;
            case 4:
            exit(0);
        }
    }
}