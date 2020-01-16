#include<stdio.h>
#include<ctype.h>
void main (){
    char ch;
  printf("enter charecter");
  scanf("%c",&ch);
    if(isalpha(ch))
    printf("alphabet");
    if(isdigit(ch))
    printf("digit");
    if(ispunct(ch))
    printf("punctuation");
    if(isspace(ch))
    printf("whitespace");
}