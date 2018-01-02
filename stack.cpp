#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;

void push(int ele)
{
	struct node *temp;
	if(top==NULL)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=ele;
		temp->next=NULL;
		top=temp;
	}
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=ele;
		temp->next=top;
		top=temp;
	}
}

void pop()
{
	struct node *temp;
	if(top==NULL)
		printf("Stack underflow");
	else
	{
		temp=top;
		top=top->next;
		free(temp);
		printf("Top node has been deleted\n");
	}
}

void display()
{
	struct node *p;
	p=top;
	if(top==NULL)
		printf("Stack underflow");
	else
	{
		while(p->next!=NULL)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
		printf("%d\t",p->data);
	}
}

int main()
{
	int ele,ch;
	printf("1 Push\n2 Pop\n3 Display\n");
	do
	{
		printf("\nEnter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter element ");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
	}
	while(1);
}

