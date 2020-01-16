#include<Stdio.h>
#include<math.h>
int main(){
    float a,b,c,real=0,img=0,root1=0,root2=0,d=0;
    printf("enter value of a b c for quadratic ax^2+bx=c\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-(4*a*c);
    if(d<0){
        printf("roots are imaginary\n");
        real=-b/(2*a);
        img=sqrt(-d)/2*a;
        printf("first root is %f+i%f\n",real,img);
        printf("second root is %f-i%f",real,img);
    }
    else if(d>0){
        printf("roots are real\n");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("first root is %f\n",root1);
        printf("second root is %f",root2);
 }
 else if(d==0){
     printf("roots are real and equal\n");
     root1=-b/(2*a);
     root2=root1;
     printf("equal roots are %f and %f",root1,root2);
 }
return 0;
}
