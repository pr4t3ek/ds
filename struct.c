#include<stdio.h>
struct student{
    char name[60];
    int roll;
    float maths;
    float chem;
float physics;
}s[3];
int main(){
    int i;
    printf("enter details\n");
    for(i=0;i<3;i++){
        scanf("%s%d%f%f%f",&s[i].name,&s[i].roll,&s[i].maths,&s[i].chem,&s[i].physics);
    }
    printf("details are\n\n");
    for(i=0;i<3;i++){
    printf("student%d\n",i+1);
    printf("name:%s",s[i].name);
    printf("roll no %d\n",s[i].roll);
    printf("maths %f\n",s[i].maths);
    printf("chem %f\n",s[i].chem);
    printf("physics %f\n",s[i].physics);
printf("\n\n");
}}