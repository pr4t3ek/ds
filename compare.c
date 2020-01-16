#include<stdio.h>
int main(){
    char str1[20],str2[20];
    int i,j,flag=1;
    printf("enter first string\n");
    gets(str1);
    printf("enter string second\n");
    gets(str2);
    i=0;
    j=0;
    while(str1[i]!='\0'||str2[j]!='\0'){
        if(str1[i]!=str2[j]){
            flag=0;
            break;}
            i++;
            j++;
    }
    if(flag==1){
        printf("equal");
    }else
    printf("not equal");
    return 0;
}