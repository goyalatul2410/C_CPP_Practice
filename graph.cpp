#include<stdio.h>
#include<stdlib.h>

struct node
{
	int vertex;
	struct node *next;
};
struct node *adj[100];
int n;

void input(struct node *adj[], int n)
{
	struct node *ptr,*last;
	int i,j,k,value;
	for(i=1;i<=n;i++)
	{
		last=NULL;
		printf("\nNo of nodes in adjacency list of %d ",i);
		scanf("%d",&k);
		for(j=1;j<=k;j++)
		{
			printf("Enter the node %d ",j);
			scanf("%d",&value);
			ptr=(struct node *)malloc(sizeof(struct node));
			ptr->vertex=value;
			ptr->next=NULL;
			if(adj[i]==NULL)
				adj[i]=last=ptr;
			else
			{
				last->next=ptr;
				last=ptr;
				}
		}
	}
}

void print(struct node *adj[],int n)
{
	struct node *ptr;
	int i;
	for(i=1;i<=n;i++)
	{
		ptr=adj[i];
		printf("\n%d",i);
		while(ptr!=NULL)
		{
			printf("->%d",ptr->vertex);
			ptr=ptr->next;
		}
	}
}

int main()
{
	printf("Enter n: ");
	scanf("%d",&n);
	input(adj,n);
	print(adj,n);
}
