#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,s;
    cin>>n>>m>>s;
    int a[m];
    int z=1,i;
    for(i=1;i<=n;i++)
    {
      a[i]=z;
      z++;
    }
     i=s;
    while(m>=1)
    {
      i++;
      m--;
      if(m==1)
        cout<<i;
      if(i==n)
      {
        i=1;
        m--;
      }
    }
  }
}

