#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;

void insertion(int ele)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	if(front==NULL)
	{
		front=rear=temp;
		return;
	}
	rear->next=temp;
	rear=rear->next;
}

void deletion()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("Queue underflow\n");
		return;
	}
	temp=front;
	front=front->next;
	free(temp);
	printf("Top node has been deleted\n");
}

void display()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("Queue underflow\n");
		return;
	}
	temp=front;
	while(temp!=rear)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}

int main()
{
	int ele,ch;
	printf("1 AddQ\n2 DeleteQ\n3 Display");
	do
	{
			printf("\nEnter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter element ");
				scanf("%d",&ele);
				insertion(ele);
				break;
			case 2:
				deletion();
				break;
			case 3:
				display();
				break;
		}
	}
	while(1);
}
