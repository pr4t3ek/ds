#include<stdio.h>
int hcf(int a,int b){
    while(a!=b){
        if(a>b)
        return hcf(a-b,b);
        else
        {
            return hcf(a,b-a);
        }
}
return a;
}

void main(){
int n1,n2,result,lcm;
printf("enter numbers\n");
scanf("%d %d",&n1,&n2);
result=hcf(n1,n2);
printf("gcd is %d\n",result);
lcm=(n1*n2)/result;
printf("lcm is %d\n",lcm);
}