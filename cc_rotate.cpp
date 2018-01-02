#include<stdio.h>
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

void rotate()
{
	struct node *p,*q;
	int count=0,i=0;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		count++;
	}
	p->next=head;
	while(i<=count/2)
	{
		p=p->next;
		i++;
	}
	q=p->next;
	head=q;
	p->next=NULL;
	 
    printf("\n item in link list:\n");
    for(q=head;q!=NULL;q=q->next)
    printf("%d\t",q->data);
}

int main()
{
  int ch,ele;
  printf("1 for creation\n");
  printf("2 for display\n");
  printf("3 for rotaion\n");
  printf("4 for exit\n");
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
		
	  case 3:	rotate();
	    break;

      case 4:   exit(0);
    }
  }
  while(1);
}
