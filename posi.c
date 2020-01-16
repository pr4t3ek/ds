#include<stdio.h>
int main(){
    float a;
    printf("enter a number");
    scanf("%f",&a);
    (a>0)?(printf("%f is positive",a)):((a<0)?printf("%f is negetive",a):(printf("number is zero")));
    return 0;

}