#include<stdio.h>
int main(){
    int a[10],high=0,low=0,i,n,num,flag=0,mid=0;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("elements are\n");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    printf("enter element to search");
    scanf("%d",&num);
high=n-1;      low=0;
while(high>=low){
    mid=(high+low)/2;
    if(num>a[mid])
    low=mid+1;
    else if(num<a[mid])
    high=mid-1;
    else{
        flag=1;
        break;
    }}
    if(flag==1)
    printf("element %d is at posn %d",num,mid+1);
else
    printf("not found");
    return 0;
}
