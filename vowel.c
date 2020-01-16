#include<stdio.h>
#include<ctype.h>
int main()
{
    char alph;
    printf("enter alphabet ");
    scanf("%c",&alph);
    if(isalpha(alph))
    {
        if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u'||alph=='A'||alph=='E'||alph=='I'||alph=='O'||alph=='U')
        printf("entered alphabet is vowel");
        else
        
            printf("enterd alphabet is consonent");
             }
             else
            printf("invalid input"); 
            return 0;
            }
             



