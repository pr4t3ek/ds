#include<stdio.h>
int main(){
    int a[50][50],i,j,m,n,b[50][50],sum[50][50];
    printf("enter order of matrix");
    scanf("%d %d",&m,&n);
    printf("enter elemnts of first matrix");                              //reading first matrix
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("order elemnts of second matrix");                            //reading 2nd matrix
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    sum[50][50]=0;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
       sum[i][j]=a[i][j]+b[i][j]; 
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d \t",sum[i][j]);
    }
    printf("\n");
}
return 0;
}