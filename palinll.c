#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
    char data[20];
    struct Node *next;
};

struct Node *head=0;

struct Node *create(char arr[]){
    struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
    strcpy(new_node->data,arr);
    new_node->next=0;
    return new_node;
}

void insert(char arr[]){
    if(head==0){
        
        head=create(arr);
        printf("%s\n",head->data);
    }
    else{
        struct Node *temp=head;
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next=create(arr);
        printf("%s\n",temp->data);
    }
}

int con(){
    printf("enter con\n");
    fflush(stdin);
    struct Node *temp=head;
    int len=(int)strlen(temp->data);

    char *str=(char *)malloc(sizeof(len));
    while(temp!=0){
        fflush(stdin);
        strcat(str,temp->data);
        printf("\n%s\n",str);
        temp=temp->next;
    }
    printf("concat string is %s \n");
        int length=(int)strlen(str);
        int i;
        for(i=0;i<length/2;i++){
            if(str[i]!=str[length-i-1])
          {  return 0;}
        }
        return 1;
}

void main(){
    int ch,flag;
    char arr[20];
    while(1){
    printf("1 insert 2 palin 3 exit");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter string to insert\n");
        fflush(stdin);
        scanf("%s",arr);
        insert(arr);
    break;
        case 2:
        fflush(stdin);
        flag=con();
        if((flag))
            printf("palindrome\n");
        else 
            printf("not palin\n");
    break;
    case 3:
    exit(0);
    }
    }
}