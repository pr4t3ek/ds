#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int x;
  struct node* next; 	
  
}node;
node *head;
node *tail;
node *sptr;
int ele,size=0;
node* create(node* next)
{
	node* t=(node*)malloc(sizeof(node));
	t->x=ele;
	t->next=next;
	size++;
	return t;
}
 void display(node* head)
 {  
 	node* p=head;
 	if(head==NULL)
 	 printf("empty shit\n");
 	 
	do
 	{
 		printf("%d ",p->x);
 		p=p->next;
    }
    while(p!=head);
    printf("\n");
 }
 node* insert(node* head,int n)
{   
    int i;

    if(head==NULL)
     {
	   head=create(NULL);
	   head->next=head;      
       return head;
     }
     node* p=head;
     node* t;
    if(n==1)
	{
      t=create(head);
	  
	  node* l=head;
	  do{
	  	l=l->next;
	  }while(l->next!=head);
	   head=t;
	  l->next=head;
	  return head;            		
	 } 
    for(i=0;i<n-2;i++)
      {
        p=p->next;
      }
    t=p->next;
	 p->next=create(t);
	 
	 return head; 
	 	
 }
 node* del(node* head,int n)
{   int i;
    node *t,*p=head;
 	if(n==1)
 	 {  node* s=head;
 	    do
 	    {
 	    	s=s->next;
		 }while(s->next!=head);
	    t=head;
 	 	head=head->next;
 	 	s->next=head;
		free(t);
 	 	size--;
 	 	return head;
	  }
	for(i=0;i<n-2;i++)
	   p=p->next;
	 t=p->next;
	 p->next=t->next;
	 free(t);
	 size--;
	 return head;  
 }
 
 void main()
 {   int ch,n,x;
 
 	while(1)
 	{
 		printf("enter\n1-insert\n2-display\n3-exit\n4-delete\n");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:printf("enter element and pos\n");
 			       scanf("%d%d",&ele,&n);
 			      if(n>size+1)
				   printf("invalid pos\n"); 
				  else
				  head=insert(head,n);
 			      break;
 		   case 2:display(head);
 		          break;
 		   case 3:exit(0);
 		   case 4:printf("enter  pos\n");
			      scanf("%d",&n);
			      if(size<n)
				  printf("Invalid pos\n");
				  else
				  head=del(head,n);
				  break;        
 		         
		 }
	 }
 }