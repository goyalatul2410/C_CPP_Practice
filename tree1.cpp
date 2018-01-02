#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *rch,*lch;
};
struct node *root=NULL;
int count=1,total;

struct node *insert(struct node *root,int num);
void countnode(struct node *root);
void countleaf(struct node *root);

int main()
{
	int num,ch;
	printf("1: Create\n");
	printf("2: Count Node\n");
	printf("3: Count Leaf\n");
	printf("4: EXIT\n");
	do
	{
		printf("\nEnter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter number to insert ");
				scanf("%d",&num);
				while(num!=999)
				{
					root=insert(root,num);
					scanf("%d",&num);
				}
				break;
				
			case 2:
				countnode(root);
				printf("Number of nodes=%d\n",count);
				count=1;
				break;
				
			case 3:
				countleaf(root);
				printf("Number od leaves=%d\n",total);
				total=0;
				break;
				
			case 4:
				exit(0);
				break;
		}
	}
	while(1);
}
	struct node *insert(struct node *root, int num)
	{
		if(root==NULL)
		{
			root=(struct node *)malloc(sizeof(struct node));
			root->data=num;
			root->lch=NULL;
			root->rch=NULL;
		}
		else
		{
			if(num<root->data)
			root->lch=insert(root->lch,num);
			else
			root->rch=insert(root->rch,num);
		}
		return(root);
	}
	
	void countnode(struct node *root)
	{
		if(root!=NULL)
		{
			if(root->lch!=NULL)
			{
				count++;
				countnode(root->lch);
			}
			if(root->rch!=NULL)
			{
				count++;
				countnode(root->rch);
			}
		}
	}
	
	void countleaf(struct node *root)
	{
		if(root!=NULL)
		{
			if(root->lch==NULL && root->rch==NULL)
			{
				total++;
			}
			
			else
			{
				countleaf(root->lch);
				countleaf(root->rch);
			}
		}
	}
