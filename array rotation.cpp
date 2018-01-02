#include<stdio.h>
int main()
{
	int a[10000],b[10000],i,n,d;
	scanf("%d%d",&n,&d);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		if(i<=n-d)
			b[i]=a[i+d];
		if(i>n-d)
			b[i]=a[i-n+d];
	}
	for(i=1;i<=n;i++)
		printf("%d\t",b[i]);
}
