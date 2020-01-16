#include<stdio.h>
int main()
{
    int n,org_num,remainder,rev=0;
    printf("enter the number\n");
    scanf("%d",&n);
    org_num=n;
    while(n!=0){
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
        }
        if(org_num==rev)
        printf("the number is palindrome\n");
        else
        printf("number is not palindrome");
        return 0;
        
}
