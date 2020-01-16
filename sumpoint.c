#include<stdio.h>
int main(){
    int *p,a[10],n,sum=0,i;
    printf("enter order of array\n");
    scanf("%d",&n);
    printf("enter value of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<n;i++){
        sum=sum+*p;
        p++;
    }
printf("\nsum of array elements is %d",sum);
}