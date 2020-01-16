#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float area,r,circumference;
    printf("enter radius");
    scanf("%f",&r);
    area=PI*pow(r,2);
    circumference=2*PI*r;
printf("area: %f \n circumference: %f\n", area,circumference);
return 0;


}