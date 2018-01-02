#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
        int n;
        cin >> n;
        int count;
        int h=1;
        count=0;
      if(n==0)
        cout<<h<<"\n";
      else
      {
        redo:
        h=2*h;
        count++;
        if(count==n)
          break;
        else
        {
          h++;
          count++;
          if(count==n)
            break;
          else
            goto redo;
        }
      }
  cout<<h<<"\n";
    }
