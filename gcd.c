#include<stdio.h>
void gcd(int m,int n);
int main(){
    int x,y;
    printf("enter two nos");
    scanf("%d %d",&x,&y);
    gcd(x,y);
}
void gcd(int m,int n){
    int p,q,gcd,lcm;
    p=m;
    q=n;
    do{
        if(m>n)
        m=m-n;
        else n=n-m;
    }
while(m!=n);{
    gcd=m;
    lcm=(p*q)/gcd;
    printf("gcd is %d\n",gcd);
    printf("lcm is %d\n",lcm);
}


}

