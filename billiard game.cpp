#include<stdio.h>
int main()
{
	int a[10],b[10],n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	
	int A[10],B[10];
	A[1]=a[1];
	B[1]=b[1];
	for(i=2;i<=n;i++)
	{
		A[i]=A[i-1]+a[i];
		B[i]=B[i-1]+b[i];
	}
	
	int r[10];
	for(i=1;i<=n;i++)
	{
		r[i]=A[i]-B[i];
	}
	
	int max=0;
	for(i=1;i<=n;i++)
	{
		if(r[i]>max)
		{
			max=r[i];
		}
	}
	if(max>0)
		printf("1\t%d",max);
	else if(max<0)
		printf("2\t%d",max);
}
