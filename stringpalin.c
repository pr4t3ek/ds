#include<stdio.h>
#include<string.h>
int main(){
    int right,left,i,flag=1;
    char str[10];
    right=0;
    left=0;
    printf("enter string\n");
    gets(str);
    right=strlen(str)-1;
    while(right>left){
        if(str[left]!=str[right]){
        flag=0;
        break;    
        }
        left++;
        right--;
    }
if(flag==1){
    printf("palindrome");}
    else
    { printf("not palindrome");
    }
return 0;}

    
