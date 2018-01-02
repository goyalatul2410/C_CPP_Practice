#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *head1=NULL,*head2=NULL;

void create(int ele,struct node *head)
{
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=ele;
		head->next=NULL;
	}
	else
	{
		struct node *p,*q;
		p=head;
		while(p->next!=NULL)
			p=p->next;
		q=(struct node *)malloc(sizeof(struct node));
		q->data=ele;
		q->next=NULL;
		p->next=q;
	}
}


int main()
{
	int ele;
		printf("enter element for list 1 ");
		scanf("%d",&ele);
		while(ele!=9999)
		{
		  create(ele,head1);
		  scanf("%d",&ele);
	    }
		
		printf("enter element for list 2 ");
		scanf("%d",&ele);
		while(ele!=9999)
		{
		  create(ele,head2);
		  scanf("%d",&ele);
	    }
