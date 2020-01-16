#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    if(n>0){
        for(i=1;i<=n;i++){
            fact=fact*i;}
            printf("the factorial is %d",fact);
            }
            else if(n==0)
            printf("factorial is 1");
            else 
            printf("invalid input");
}