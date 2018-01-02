#include<stdio.h>
int main()
{
	int a,b,s,t,m,n,i;
    int dm[32765],dn[32765],cm=0,cn=0;
	scanf("%d%d",&s,&t);
	scanf("%d%d",&a,&b);
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
		scanf("%d",&dm[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&dn[i]);
	for(i=1;i<=m;i++)
	{
		if(a+dm[i]>=s)
			cm++;
	}
	for(i=1;i<=n;i++)
	{
		if(b+dn[i]<=t)
			cn++;
	}
	printf("%d\n%d",cm,cn);
}
