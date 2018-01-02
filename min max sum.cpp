#include<stdio.h>
int main()
{
	long a[10],i,j,min=0,max=0,temp;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
		min=min+a[i];
	for(i=1;i<5;i++)
		max=max+a[i];
	printf("%d\t%d",min,max);
}
