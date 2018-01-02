#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,j,a[n],b[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        int temp;
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                if(a[j]<a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        int count=0;
        int x;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(b[i]==a[j])
                {
                    x=i-j;
                    if(x<0)
                        x=-x;
                    count=count+x;
                    break;
                }    
            }
        }
        cout<<count;
    }
}