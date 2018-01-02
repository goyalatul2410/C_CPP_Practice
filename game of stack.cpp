#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int i;
        int a[n],b[m];
        for(i=n;i>=1;i--)
            cin>>a[i];
        for(i=m;i>=1;i--)
            cin>>b[i];
        int count=0;
        while(k>=0)
        {
            if(a[n]<b[m])
            {
                k=k-a[n];
                n--;
                count++;
            }
            else if(a[n]>b[m])
            {
                k=k-b[m];
                m--;
                count++;
            }
        }
        cout<<count-1;
	}
}
