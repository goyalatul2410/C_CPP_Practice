#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;

void create()
{
	int ele;
	printf("Enter data: ");
	scanf("%d",&ele);
	struct node* temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	if(front==NULL)
		front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
	}
	rear->next=front;
}


int main()
{
	int k,n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		create();
	}
	printf("\nEnter k: ");
	scanf("%d",&k);
	struct node *p=front,*q=front;
	while(p->next!=p)
	{
		for(i=1;i<k;i++)
		{
			q=p;
			p=p->next;
		}
		printf("\n");
		printf("Number deleted is %d\n",p->data);
		q->next=p->next;
		free(p);
		p=q->next;
	}	
	printf("\nNumber remain safe is %d",p->data);
}
