#include<stdio.h>
int main(){
    int i,j;
    char str1[20],str2[20],new_str[40];
    printf("enter first string\n");
    gets(str1);
    printf("enter second string\n");
    gets(str2);
    i=0;
    j=0;
    while(str1[i]!='\0'){
        new_str[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0'){
        new_str[i]=str2[j];
        i++;
        j++;
    }
    new_str[i]='\0';
    printf("new string is %s",new_str);
}