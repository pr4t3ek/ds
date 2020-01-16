#include<stdio.h>
int main(){
    int i=1,n,num;
    float avg,sum;
     
    printf("enter no of elemnts\n");
    scanf("%d",&n);
    while(1){
        printf("enter number");
        scanf("%d",&num);
        if(num<0)
        continue;
        if(i==n)
        break;
        sum=sum+num;
        i++;
    }
    
    avg=sum/(float)n;
    printf("average is %f",avg);
    return 0;

        

    }

    


