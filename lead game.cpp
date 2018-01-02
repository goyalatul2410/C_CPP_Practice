#include<stdio.h>
main()
{
	int a[10],i,n,j,temp;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	  printf("%d\t",a[i]);
}
