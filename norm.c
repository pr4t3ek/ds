#include<stdio.h>
#include<math.h>
int main(){
    int i,j,a[10][10],sum,trace,m,n;
    float norm;
    printf("enter order of matrix");
    scanf("%d %d",&m,&n);
    if(m!=n)
{printf("trace as not square matrix");}
    else 
    {printf("enter elements");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    trace=0;                                        //trace
    for(i=0;i<n;i++){
        trace=trace+a[i][i];
    }
    sum=0;
    norm=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum=sum+a[i][j]*a[i][j];
        }
    }
norm=sqrt(sum);
printf("trace is %d\n",trace);
printf("norm is %f",norm);
return 0;
}}