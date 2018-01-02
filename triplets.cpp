#include<stdio.h>
int main()
{
	int a[100],n,i,j,k,d,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&d);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				sum=0;
				sum=a[i]+a[j]+a[k];
				if(sum==d)
					printf("\n%d %d %d",a[i],a[j],a[k]);
			}
		}
	}
}
