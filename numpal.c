#include<stdio.h>
int pal();
int main(){
    int a=pal();
    if(a==1)
    printf("palindrome");
    else printf("not palindrome");
    return 0;
}
int pal(){
int num,rem=0,rev=0,temp=0;
printf("enter number");
scanf("%d",&num);
temp=num;
while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
if(rev==temp)
return 1;
else
return 0;
}

