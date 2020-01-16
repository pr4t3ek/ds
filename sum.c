#include<stdio.h>
int main(){
    int i,odd_sum=0,even_sum=0,n;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i%2==0)
        even_sum=even_sum+i;
        else
        odd_sum=odd_sum+i;
        }
        printf("sum of all even nos is %d\n",even_sum);
        printf("sum of all odd nos is %d\n",odd_sum);
        return 0;
}