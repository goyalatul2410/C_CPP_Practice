#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,h=0,sum=0;
		scanf("%d",&n);
		while(1)
		{
			sum=sum+h+1;
			if(sum>n)
			break;
			else
			h++;
		}
		printf("%d",h);
	}
}
