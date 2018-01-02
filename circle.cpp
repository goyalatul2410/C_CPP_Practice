#include <stdio.h>

#include <math.h>

int main ()

{

int i,j,k,r=10,x=10,y=10,d,a,l;

for(i=0;i<24;i++)

{

for(j=0;j<25;j++)

{

a=((i-x)*(i-x))+((j-y)*(j-y));

d=sqrt(a);

if(r==d)

{

printf("*");

}

else

printf(" ");

}

printf("\n");

}

return 0;

}
