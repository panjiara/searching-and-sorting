#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
  int x;
  cin>>x;
  int i=1;
  while(i<n)
  {
      if(x<A[2*i]&&x>=A[i])
      {
          int hi=2*i,lo=i;

          while(lo<=hi)
          {
              int mid=lo+(hi-lo)/2;
              if(A[mid]==x)
              {
                cout<<mid;
                break;
              }
              if(A[mid]<x)
                lo=mid+1;
              else
                hi=mid-1;
          }


        }
        i=2*i;

      }


return 0;
  }





