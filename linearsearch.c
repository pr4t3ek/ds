#include<stdio.h>
int main(){
    int n,i,a[50],num,count;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    count=0;
    printf("enter elemnt to search");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            printf("the element %d is at %d\n",num,i+1);
            count++;
        }}
        if(count==0){
        printf("the element is not present\n");}
        else
        {
            printf("elemnnt is present %d times\n",count);
        }
        return 0;
}