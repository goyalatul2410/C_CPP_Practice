#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[10],i,sum=0;
		for(i=1;i<=5;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=5;i++)
		{
			sum=sum+a[i];
		}
		printf("\n%d",sum);
	}
}
