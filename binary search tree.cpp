#include<stdio.h>
#include<stdlib.h>

struct tree
{
	int data;
	struct tree *rch,*lch;
};
struct tree *root=NULL;

struct tree *insert(struct tree *root,int ele)
{
	if(root==NULL)
	{
		root=(struct tree *)malloc(sizeof(struct tree));
		root->data=ele;
		root->lch=root->rch=NULL;
	}
	else if(ele<root->data)
		root->lch=insert(root->lch,ele);
	else
		root->rch=insert(root->rch,ele);
	return(root);
}

void preorder(struct tree *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->lch);
		preorder(root->rch);
	}
}

void inorder(struct tree *root)
{
	if(root!=NULL)
	{
		preorder(root->lch);
		printf("%d\t",root->data);
		preorder(root->rch);
	}
}

void postorder(struct tree *root)
{
	if(root!=NULL)
	{
		preorder(root->lch);
		preorder(root->rch);
		printf("%d\t",root->data);
	}
}

void search(struct tree *root,int ele)
{
	if(root==NULL)
		printf("Number not found\n");
	else if(ele==root->data)
		printf("Number found\n");
	else if(ele<root->data)
		search(root->lch,ele);
	else if(ele>=root->data)
		search(root->rch,ele);
	else
		printf("Number not found\n");
}

struct tree *findmin(struct tree *root)
{
	while(root->lch!=NULL)
		root=root->lch;
		return root;
}

struct tree *delet(struct tree *root,int ele)
{
	if(root==NULL)
		return root;
	else if(ele<root->data)
		root->lch=delet(root->lch,ele);
	else if(ele>root->data)
		root->rch=delet(root->rch,ele);
	else
	{
		if(root->lch==NULL&&root->rch==NULL)
		{
			free(root);
			root=NULL;
		}
		else if(root->lch==NULL)
		{
			struct tree *temp;
			temp=root;
			root=root->rch;
			free(temp);
		}
		else if(root->rch==NULL)
		{
			struct tree *temp;
			temp=root;
			root=root->lch;
			free(temp);
		}
		else 
		{
			struct tree *temp=findmin(root->rch);
			root->data=temp->data;
			root->rch=delet(root->rch,temp->data);
		}
	}
	return root;
}

int main()
{
	int ele,ch;
	printf("1 Insert\n");
	printf("2 Preorder\n3 Inorder\n4 Postorder\n");
	printf("5 Search\n");
	printf("6 Delete\n");
	do
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter number: ");
				scanf("%d",&ele);
				while(ele!=9999)
				{
					root=insert(root,ele);
					scanf("%d",&ele);
				}
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				printf("Enter number: ");
				scanf("%d",&ele);
				search(root,ele);
				break;
			case 6:
				printf("Enter number: ");
				scanf("%d",&ele);
				delet(root,ele);
				break;
		}
	}
	while(1);
}
