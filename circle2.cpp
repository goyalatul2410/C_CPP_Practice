#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a,r=10,x=10,y=10;
	float d;
	for(i=0;i<24;i++)
	{
		for(j=0;j<24;j++)
		{
			a=((i-x)*(i-x)+(j-y)*(j-y));
			d=sqrt(a);
			if(d==r)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
