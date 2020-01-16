#include<stdio.h>


struct student{
    char name[20];
    int rollNo;
    
}s[3];

void main(){
    struct student *ptr;
    ptr=s;
    int i;
    printf("enter details \n");
    for(i=0;i<3;i++){
        
        scanf("%s %d",ptr->name,&ptr->rollNo);
        ptr++;

    }
    ptr=s;
    for(i=0;i<3;i++){
        printf("studnet %d \n",i+1);
        printf("name is %s\n",ptr->name);
        printf("rolno is %d\n",ptr->rollNo);
        ptr++;
    }
}