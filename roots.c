#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,d;
    printf("the quadratic is of form ax^2+bx=c\n enter value of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("roots are %f %f",x1,x2);
        }
        else 
        if(d==0)
        {x1=-b/(2*a); x2=x1;
        printf("roots are equal %f %f",x1,x2);
        }
        else
            if(d<0)
            printf("roots are imaginary");
            else
         printf("invalid input");
         return 0;
            }