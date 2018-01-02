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

void sort()
{
	struct node *p,*q,*r;
	int temp;
	for(p=head;p!=NULL;p=p->next)
	{
		for(q=p;q!=NULL;q=q->next)
		{
			if(q->data<p->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
	printf("\n item in link list:\n");
  for(r=head;r!=NULL;r=r->next)
    printf("%d\t",r->data);
}

int main()
{
  int ch,ele;
  printf("1 for creation\n");
  printf("2 for display\n");
  printf("3 for sort\n");
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
		
	  case 3:	sort();
	    break;

      case 4:   exit(0);
    }
  }
  while(1);
}
