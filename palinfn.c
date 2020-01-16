#include<stdio.h>
void pal();
int main(){
    pal();
    return 0;
}
void pal(){
    int num,rev=0,rem=0,temp=0;
    printf("enter number to check");
    scanf("%d",&num );
    temp=num;
    while(num){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
        printf("palindrome");
    else printf("not palindrome");
}