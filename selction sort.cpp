#include<stdio.h>
void selection(int,int *);
main()
{
	int a[100],i,n;
	printf("Enter size ");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	selection(n,a); 
}

void selection(int n,int a[])
{
	int i,j,temp,min,loc;
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				loc=j;
			}
		}
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
