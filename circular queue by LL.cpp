#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;

void addQ(int ele)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
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

void delQ()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	else
		temp=front;
		front=front->next;
		rear->next=front;
		free(temp);
		printf("Number deleted\n");
}

void display()
{
	if(front==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	else
	{
		struct node *temp;
		temp=front;
		while(temp->next!=front)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\t",temp->data);
	}
	printf("\n");
}

int main()
{
	int ele,ch;
	printf("1 addQ\n2 delQ\n3 Display\n");
	do
	{
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter number: ");
				scanf("%d",&ele);
				addQ(ele);
				break;
			case 2:
				delQ();
				break;
			case 3:
				display();
				break;
		}
	}
	while(1);
}
