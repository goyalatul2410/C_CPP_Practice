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
    int n;
    cin>>n;
    int a[20];
    int z;
    z=n;
    int i=0;
    while(z!=0)
    {
      i++;
      int temp;
      temp=z%10;
      a[i]=temp;
      z=z/10;      
    }
    int j,count=0;
    for(j=1;j<=i;j++)
    {
      if(n%a[j]==0)
        count++;
    }
    cout<<count<<endl;
  }
}
