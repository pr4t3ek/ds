#include<stdio.h>
int main(){
    float a,b,c;
    char ch;
    c=0;
    printf("enter + for addition\nenter-for subtraction\nenter * for multi\nenter / for division");
    scanf("%s",&ch);
    switch(ch){
        case '+':
        printf("enter a and b");
        scanf("%f %f",&a,&b);
        c=a+b;
        printf("sum is %f",c);
        break;
        case '-':
        printf("enter a and b");
        scanf("%f %f",&a,&b);
        c=a-b;
        printf("difference is %f",c);
        break;
        case '*':
        printf("enter a and b");
        scanf("%f %f",&a,&b);
        c=a*b;
        printf("product is %f",c);
        break;
        case'/':
        printf("enter dividend and divisor");
        scanf("%f %f",&a,&b);
        if(b==0)
        printf("error as 0");
        else
        {c=a/b;
        printf("qutient is %f",c);}
        break;
        default:
        printf("error");

        
        



    }
}