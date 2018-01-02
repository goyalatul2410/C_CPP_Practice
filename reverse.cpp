#include<stdio.h>
int main()
{
	int n=23,temp,r=0;
	while(n!=0)
	{
		temp=n%10;
		n=n/10;
		r=r*10+temp;
	}
	printf("%d",r);
}
