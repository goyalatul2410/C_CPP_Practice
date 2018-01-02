#include<stdio.h>

int a[3][3],b[3][3],c[3][3];
int i,j,k;

void sum()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

void sub()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

void mul()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	printf("Enter elements of matrix A: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter elements of matrix B: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	printf("Sum:\n");
	sum();
	printf("Difference:\n");
	sub();
	printf("multiplication:\n");
	mul();
}


