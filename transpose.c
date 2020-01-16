#include<stdio.h>
int main(){
    int i,j,m,n,a[10][10],trans[10][10];
printf("enter order of matrix");
scanf("%d%d",&m,&n);
printf("Enter elements");

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
trans[10][10]=0;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        trans[j][i]=a[i][j];
    }}
    printf("initial matrix is \n");
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d \t",a[i][j]);
            }
            printf("\n");
        }
        printf("transpose is \n");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d \t",trans[i][j]);
            }
            printf("\n");
        }
        return 0;
}


       


