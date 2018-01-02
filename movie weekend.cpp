#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int l[100],r[100],s[100];
		int n,i,max=0,rn,in;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&l[i]);
		for(i=0;i<n;i++)
			scanf("%d",&r[i]);
		for(i=0;i<n;i++)
		{
			s[i]=l[i]*r[i];
			if(s[i]>max)
			{
				max=s[i];
				rn=r[i];
				in=i;
			}
			else if(max==s[i])
			{
				if(r[i]>rn)
				{
					max=s[i];
					rn=r[i];
					in=i;
				}
				else if(r[i]==rn)
				{
					in=in;
				}
			}
		}
		printf("\n\n%d",in);
	}
}
