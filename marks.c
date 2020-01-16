#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5,m6;
    float avg;
    printf("Enter the marks in 6 subjects out of 100\n");
    scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
   
    if(m1<40||m2<40||m3<40||m4<40||m5<40||m6<40){
        printf("fail\n");
        return 0;
    }
    avg=0;
    avg=(m1+m2+m3+m4+m5+m6)/6;
    if(avg>=90)
        printf("S");
    else if(avg>=75&&avg<90)
    printf("A"); 
    else if(avg<75&&avg>=60)
    printf("B");
    else if(avg>=0&&avg<40)
    printf("FAIL");
return 0;

}