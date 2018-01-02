#include<stdio.h>
int main()
{
	 int a[3],b[3],i,s1=0,s2=0;
	 for(i=1;i<=3;i++)
	 	scanf("%d",&a[i]);
	for(i=1;i<=3;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=3;i++)
	{
		if(a[i]>b[i])
			s1=s1+1;
		else if(a[i]<b[i])
			s2=s2+1;
	}
	printf("%d\t%d",s1,s2);
}
