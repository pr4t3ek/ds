#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,count=0;
    float ans;
    printf("enter number");
    scanf("%d",&num);
    n=num;                 //assign hence (=)
    
    
L:
ans=sqrt(n);
    printf("sq root of number %d is %f \n",n,ans);
    n++;
    count++;
    if(count<=4)
        goto L;
        
        return 0;
}