#include<stdio.h>
int main()
{
	int a[100000],b[100000],n,i,k,q,m[500];
	scanf("%d,&n");
	scanf("%d,&k");
	scanf("%d,&q");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=q;i++)
		scanf("%d",&m[i]);
	for(i=0;i<n;i++)
	{
			if(i<=n-k)
			b[i]=a[i+k];
		if(i>n-k)
			b[i]=a[i-n+k];
	}
	
}
