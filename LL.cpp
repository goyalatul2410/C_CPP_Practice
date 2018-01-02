#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

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
		q=(struct node *)malloc(sizeof(struct node));
		while(p->next!=NULL)
			p=p->next;
		q=new(struct node);
		q->data=ele;
		q->next=NULL;
		p->next=q;
	}
}
void traverse()
{
	struct node *p;
	p=head;
	while(p->next!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;	
	}
	printf("%d\n",p->data);
}

void insertbeg(int ele)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=ele;
	p->next=head;
	head=p;
}

void insertmid(int ele,int loc)
{
	struct node *p,*q;
	int i=1;
	p=head;
	while(i<=loc)
	{
		p=p->next;
		i++;
	}
	q=(struct node *)malloc(sizeof(struct node));
	q->data=ele;
	q->next=p->next;
	p->next=q;
}

void insertend(int ele)
{
	struct node *p,*q;
	p=head;
	while(p->next!=NULL)
		p=p->next;
	q=(struct node *)malloc(sizeof(struct node));
	q->data=ele;
	q->next=p->next;
	p->next=q;
}

void deletebeg()
{
	head=head->next;
}

void deletemid(int loc)
{
	struct node *p;
	int i=1;
	p=head;
	while(i<loc-1)
	{
		p=p->next;
		i++;
	}
	p->next=p->next->next;
}
void deleteend()
{
	struct node *p;
	p=head;
	while(p->next->next!=NULL)
		p=p->next;
	p->next=NULL;
}

void sort()
{
	struct node *p,*q;
	for(p=head;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(q->data<p->data)
			{
				int temp;
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
}

void search(int ele)
{
	struct node *p;
	int count=1;
	p=head;
	while(p->next!=NULL)
	{
		if(p->data==ele)
		{
			printf("Number found at location %d\n",count);
			break;
		}
		else
		{
			count++;
			p=p->next;
		}
	}
}

void reverse()
{
	struct node *p,*q,*r;
	p=q=r=head;
	p=p->next->next;
	q=q->next;
	r->next=NULL;
	q->next=r;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
}

void swap()
{
	struct node *p,*q;
	p=head;
	while(p->next->next!=NULL)
	{
		int temp;
		temp=p->data;
		p->data=p->next->data;
		p->next->data=temp;
		p=p->next->next;
	}
}
int main()
{
	int ele,ch,loc;
	printf(" 1 Insertion\n 2 Traversal\n");
	printf(" 3 Insert Beg\n 4 Insert Mid\n 5 Insert End\n");
	printf(" 6 Delete Beg\n 7 Delete Mid\n 8 Delete End\n");
	printf(" 9 Sorting\n10 Searching\n11 Reverse\n");
	printf("12 Pair Swapping\n");
	do
	{
		printf("\nEnter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter element ");
				scanf("%d",&ele);
				while(ele!=999)
				{
				  create(ele);
				  scanf("%d",&ele);
	    		}
				break;
			case 2:
				traverse();
				break;
			case 3:
				printf("Enter no ");
				scanf("%d",&ele);
				insertbeg(ele);
				break;	
			case 4:
				printf("Enter no and location ");
				scanf("%d%d",&ele,&loc);
				insertmid(ele,loc);
				break;
			case 5:
				printf("Enter no ");
				scanf("%d",&ele);
				insertend(ele);
				break;
			case 6:
				deletebeg();
				printf("First Node has been deleted\n");
				break;
			case 7:
				printf("Enter location ");
				scanf("%d",&loc);
				deletemid(loc);
				printf("Node at given location has been deleted\n");
				break;
			case 8:
				deleteend();
				printf("Last Node has been deleted\n");
				break;
			case 9:
				sort();
				printf("Linked List has been Sorted\n");
				break;
			case 10:
				printf("Enter number to be search ");
				scanf("%d",&ele);
				search(ele);
				break;
			case 11:
				reverse();
				printf("Linked list has been reversed\n");
				break;
			case 12:
				swap();
				printf("Elements of linked list has been swapped in pair\n");
				break;
    	}
    }
    while(1);
}
