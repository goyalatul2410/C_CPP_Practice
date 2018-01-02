#include<stdio.h>
#include<stdlib.h>

int report[100],killer[100];
int main()
{
	int n,i,j,k=0,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&report[i]);
	
	for(j=0;j<n;j++)
	{
		flag=1;
		for(i=0;i<n;i++)
		{
			if(j==report[i])
			{
				flag=0;
				break;
			}	
		}
		if(flag==1)
		{
			killer[k]=j;
			k++;
		}
	}
	for(i=0;i<k;i++)
	  printf("%d\t",killer[i]);
	return 0;
}
