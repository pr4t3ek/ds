#include<stdio.h>
int main(){
    int a[10],n,i,j,temp;
    temp=0;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                }
        }
    }
    printf("sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}

