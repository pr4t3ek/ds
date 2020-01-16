#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
    char data[20];
    struct Node* next;
}Node;
Node* head;
Node* create(char arr[])
{
     Node* t=(Node*)malloc(sizeof(Node));
	 strcpy(t->data,arr);
	 t->next=NULL;
	 return t;
}
Node* insert(Node* head,char arr[])
{   if(head!=NULL)
    {
	  head=create(arr); 
	  return head;
    }
    else
    {   Node* t=head;
    	while(t->next!=NULL)
		 t=t->next;
		t=create(arr);
		return head;	 
	}
}
int con(Node* head)
{ Node* node=head; 
  int len=(int)strlen(node->data);
  
  char* str=(char*)malloc(sizeof(len));
  while(node!=NULL)
  {
    strcat(str,node->data);
	node=node->next;	
  }	
   int length=(int)strlen(str),i;
   for (i=0; i<length/2; i++)
        {
		 if (str[i] != str[length-i-1])
            return 0;
        }
    return 1;
}

	void main()
{
	int ch;
	char x[20];
	while(1)
	{
		printf("Enter choice 1.INSERT 2.CHECK PALINDROME 3.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter element\n");
			       scanf("%s",x);
			       head=insert(head,x);
			       break;
		    case 2:
		           if(con(head))
		            printf("Palindrome\n");
		           else
		            printf("Not\n");
		           break;
		    
			case 3:exit(0);
		    
		    default:printf("Invalid Choice\n");
		            break;
		}
	}
}