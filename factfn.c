#include<stdio.h>
int factorial(int a);
int main(){
    int n,f;
printf("enter number whose factorial is to be found");
scanf("%d",&n);
f=factorial(n);
if(f==0){
    printf("invalid input");
}
else if(f==1){
    printf("factorial is 1");
}
else 
printf("factorial of %d is %d",n,f);
return 0;
}
int factorial(int m)
{
int fact,a;
fact=1;
if(m==0){
    return(1);
}
else if(m>0)
{for(a=1;a<=m;a++){
    fact=fact*a;
}

return (fact);
}
else {
    return 0;
}
}

