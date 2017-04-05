#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
        int i=0,m;
        cin>>m;
        int x;
        cin>>x;
        int flag=0;
    while(i<n)
    {
        if(x>A[n-1])
            break;
      if(x<A[m+i])
      {
          for(int j=i;j<i+m;j++)
          {
              if(A[j]==x)
              {
                  flag=1;
                 cout<<j<<endl;
                 break;

              }

          }
      }
      else
        i=m+i;
        if(flag==1)
            break;
    }
    if(flag==0)
        cout<<"not found"<<endl;





    return 0;
}
