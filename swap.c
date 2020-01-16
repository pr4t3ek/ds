#include<stdio.h>
void main(){
    int a,b,temp,*p,*q;
    printf("enter value of 2 nos\n");
    scanf("%d %d",&a,&b);
    printf("value before swap is %d and %d\n",a,b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("value after swap is %d and %d\n",a,b);
}