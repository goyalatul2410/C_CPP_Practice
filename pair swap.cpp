#include<stdio.h>
int main()
{
	int a[100],i,temp;
	for(i=1;i<=6;i++)
		scanf("%d",&a[i]);
	i=1;
	while(i<=5)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		i=i+2;
	}
	for(i=1;i<=6;i++)
		printf("%d",a[i]);
}
