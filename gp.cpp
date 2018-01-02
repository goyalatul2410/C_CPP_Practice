#include<stdio.h>
int main()
{
	int a[10],i;
	printf("enter the array");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<3;i++)
	{
		if((a[i+1]/a[i])==(a[i+2]/a[i+1]))
			printf("\npossible\n");
		else
			printf("\nnot possible\n");
	}
}
