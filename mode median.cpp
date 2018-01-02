#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
	k=n/2;
	printf("\n%d",a[k]);
}
