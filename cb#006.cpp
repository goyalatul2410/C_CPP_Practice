#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[100],a,b;
	printf("enter n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	
	a=a[1];
	b=b[2];
	
	for(i=0;i<n;i++)
	  a[i]=a[i+2];
	  
	for(i=0;i<n-2;i++)
	  printf("%d",a[i]);
	
	return 0;
}
