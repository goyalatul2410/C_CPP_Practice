#include<stdio.h>
#define n 10
int front=-1,rear=-1;
int a[n];

void addQ(int ele)
{
	if(front==0&&rear==n-1||front==rear+1)
		printf("Queue overflow\n");
	if(front==-1&&rear==-1)
		front=rear=0;
	else
		rear=rear+1;
	a[rear]=ele;
}

void delQ()
{
	if(front==-1)
		printf("Queue underflow\n");
	else
	{
		front++;
		printf("Data deleted\n");
	}
}

void display()
{
	if(front==-1)
		printf("Queue underflow");
	else
	{
		int i;
		for(i=front;i<=rear;i++)
			printf("%d\t",a[i]);
	}
}

int main()
{
	int ele,ch;
	printf("1 Push\n2 Pop\n3 Display\n");
	do
	{
		printf("\nEnter your choice: ");
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
