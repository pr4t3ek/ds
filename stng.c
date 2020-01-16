#include<stdio.h>
#include<string.h>
int main(){
char str1[20],str[20],str2[20];
int i=0;
printf("enter string\n");
gets(str1);
strcpy(str,str1);
printf("copied string is %s\n",str);
printf("enter second string\n");
gets(str2);
if(strcmp(str1,str2)==0){
    printf("strings are same\n");
}else{
    printf("strings are different\n");}
i=strlen(str1);
printf("length of string %s is %d\n",str1,i);
printf("concatenated string is %s\n",strcat(str1,str2));
return 0;}
