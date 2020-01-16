#include<stdio.h>
int main(){
    float faren,cel,a;
    printf("1.convert farenheit to celsius");
    printf("\n2.convert celsius to farenheit\n" );
    scanf("%f",&a);
    if(a==1){
        printf("enter temp in farenheit:");
        scanf("%f",&faren);
        cel=faren-32/1.8;
        printf("\nTemp in celsius is:%f\n",cel);
    }
        else 
        if (a==2){
            printf("\nenter temp in celsius:");
            scanf("%f",&cel);
            faren=1.8*cel+32;
            printf("\ntemp in farenheit is:%f",faren);
        }
        else{
            printf("not valid input");
 }
             return 0;
    }
