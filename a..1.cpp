// sum(2,3)=sum(sum(3))
#include<stdio.h>
#include<conio.h>
void sum(int d,int n)
{
	int i,j,s=0;
	for(i=1;i<=d;i++)
	{
		s=0;
		for(j=1;j<=n;j++)
		{
			s=s+j;	
		}
		n=s;
	}
	printf("%d",s);
}
int main()
{
	int d,n;
	scanf("%d",&d);
	scanf("%d",&n);
	sum(d,n);
	return 0;
}
