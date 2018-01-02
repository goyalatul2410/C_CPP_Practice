#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],b[100000];
    int i,j;
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[j]>a[i])
        {
          int temp;
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
    }
    int at,count=0,c=1;
    at=a[0];
    j=0;
    for(i=0;i<n;i++)
    {
      if(a[i]==at)
        count++;
      else if(at!=a[i])
      {
        b[j]=count;
        count=1;
        j++;
        c++;
        at=a[i];
      }
    }
  int max;
  max=b[0];
  for(j=0;j<c;j++)
  {
    if(max<b[j])
    {
      int temp;
      temp=max;
      max=b[j];
      b[j]=temp;
    }
    
  }
  cout<<max;
}

