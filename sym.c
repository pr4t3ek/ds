#include<stdio.h>
void main(){
    int a[10][10],i,j,m,n,flag=0;
    printf("enter order of matrix");
    scanf("%d %d",&m,&n);
    printf("enter elements");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
}
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
if(a[j][i]!=a[i][j])
        flag=1;
        }}
        if(flag==1)
            printf("not symmetric");
            else printf("symmbetric");
}
        