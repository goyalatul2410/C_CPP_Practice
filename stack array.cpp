#include<stdio.h>
#define n 10
int a[n];
int top=-1;

void push(int);
void pop();
void display();

int main()
{
	int ele,ch;
	do
	{
		printf("1 Push\n2 Pop\3 Display\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter number: ");
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

void push(int ele)
{
	if(top==n-1)
	{
		printf("Stack overflow\n");
		return;
	}
	top=top++;
	a[top]=ele;
}

void pop()
{
	if(top==-1)
	{
		printf("Stack under flow");
		return;
	}
	top--;
	printf("Item poped");
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack underflow");
	    return;
	}
	i=top;
	while(i!=-1)
	{
		printf("%d\t",a[i]);
		i--;
	}
}
