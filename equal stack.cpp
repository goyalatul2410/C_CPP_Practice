#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n1,n2,n3; 
    int i;
    int s1,s2,s3;
    s1=s2=s3=0;
    scanf("%d %d %d",&n1,&n2,&n3);
    int h1[n1];
    for(i = n1;i > 0;i--)
    {
       scanf("%d",&h1[i]);
        s1=s1+h1[i];
    }
    int h2[n2];
    for(i = n2;i > 0;i--)
    {
       scanf("%d",&h2[i]);
        s2=s2+h2[i];
    }
    int h3[n3]; 
	for(i = n3;i > 0;i--)
    {
       scanf("%d",&h3[i]);
        s3=s3+h3[i];
    }
 //   printf("%d %d %d",s1,s2,s3);
    int p;
    while(s1!=s2&&s1!=s3&&s2!=s3)
    {
        if(s1>s2&&s1>s3)
        {
            p=s1;
            s1=s1-h1[n1];
            n1++;
        }
        else if(s2>s1&&s2>s3)
        {
            p=s2;
            s2=s2-h2[n2];
            n2++;
        }
        else if(s3>s2&&s3>s2)
        {
            p=s3;
            s3=s3-h3[n3];
            n3++;
        }
        else if(s1==0||s2==0||s3==0)
            s1=s2=s3=0;
    }   
    printf("%d",s3);
}
