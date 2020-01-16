#include<stdio.h>
#include<ctype.h>
#define SIZE 50

void push(char item,int *top,char s[])
{
	if(*top==SIZE-1)
	{
		printf("Stack Overflow\n");
		return;
	}
	s[++(*top)]=item;
}
char pop(int *top,char s[])
{
	char del;
	if(*top==-1)
	 {
      printf("Stack Underflow\n");
		return;
	 }
	 del=s[(*top)--];
     return del;
}
int pri(char symbol)
{
	switch(symbol)
	{
		case '#':return 0;
		case '(':return 1;
		case '+':
		case '-':return 2;
		case '*':
		case '/':
		case '%':return 3;
		case '$':
		case '^':return 4;
	}
}
void infix_to_postfix(char infix[],char postfix[])
{
	char symbol,s[SIZE];
	int i,j,top;
	top=-1;
	push('#',&top,s);
	j=0;
	while((symbol=infix[i++])!='\0')
	{
		if(symbol=='(')
		 push(symbol,&top,s);
		
	    else if(isalnum(symbol))
	     postfix[j++]=symbol;
	    
	    else if(symbol==')')
	    {
	    	while(s[top]!='(')
	    	 postfix[j++]=pop(&top,s);
	    	pop(&top,s);
		}
		else
		{
			while(pri(s[top])>=pri(symbol))
			  postfix[j++]=pop(&top,s);
			push(symbol,&top,s);  
		}
	}
	while(s[top]!='#')
	postfix[j++]=pop(&top,s);
	postfix[j]='\0'; 
}
void main()
{
  char infix[SIZE],postfix[SIZE];
  printf("Enter a valid exp\n");
  scanf("%s",infix);
  infix_to_postfix(infix,postfix);
  printf("Given Infix expression:\t%s\n",infix);	
  printf("Converted Postfix expression:\t%s\n", postfix);
}	
	
	

