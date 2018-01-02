#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*head;

void create(int ele)
{
  struct node *p,*q;
  if(head==NULL)
  {
    head=(struct node *)malloc(sizeof(struct node));
    head->data=ele;
    head->next=NULL;
  }
  else
  {
    p=head;
    while(p->next!=NULL)
    {
      p=p->next;
    }
    q=(struct node *)malloc(sizeof(struct node));
    q->data=ele;
    q->next=NULL;
    p->next=q;
  }
}

void display()
{
  struct node *p;
  if(head==NULL)
  {
    printf("\nLIST IS EMPTY\n");
    return;
  }
  printf("\n item in link list:\n");
  for(p=head;p!=NULL;p=p->next)
    printf("%d\t",p->data);
}

void delet_mid()
{
	struct node *p,*q;
	int count=0,i=0;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		count++;
	}
	p=head;
	while(i<count/2-1)
	{
		p=p->next;
		i++;
	}
	p->next=p->next->next; 
    printf("\n item in link list:\n");
    for(q=head;q!=NULL;q=q->next)
    {
    	printf("%d\t",q->data);
	}
}

void reverse()
{
	struct node *p,*r,*s;
	p=head;
	r=NULL;
	while(p!=NULL)
	{
		s=r;
		r=p;
		p=p->next;
		r->next=s;
	}
	head=r;
	while(r!=NULL)
	{
		printf("%d  ",r->data);
		r=r->next;
	}
}

int main()
{
  int ch,ele;
  printf("1 for creation\n");
  printf("2 for display\n");
  printf("3 for delet\n");
  printf("4 for reverse\n");
  printf("5 for exit\n");
  do
  {
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:	printf("enter element ");
		scanf("%d",&ele);
		while(ele!=999)
		{
		  create(ele);
		  scanf("%d",&ele);
	    }
		break;

      case 2:	display();
		break;
		
	  case 3:	delet_mid();
	    break;
	    
	  case 4:	reverse();
	  	break;

      case 5:   exit(0);
    }
  }
  while(1);
}
