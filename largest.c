#include<stdio.h>
int main()
{
float a,b,c;
printf("enter three nos");
scanf("%f %f %f",&a,&b,&c);
(a>b)?((a>c)?printf("%f is largest",a):printf("%f is largest",c)):((b>c)?printf("%f is largest",b):printf("%f is largest",c));
return 0;
}