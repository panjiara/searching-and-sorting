#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++)
    cin>>A[i];
   //sort(A,A+n);
   int x;
   cin>>x;
   int l=0,r=n-1;
   int flag=0;
   while(l<=r)
   {
       int m=l+(r-l)/2;
       if(A[m]==x)
       {
           flag=1;
           cout<<m+1<<endl;
           break;
       }
       if(A[m]>x)
       {
           r=m-1;
       }
       else
        l=m+1;
   }
if(flag==0)
    cout<<"Not found"<<endl;


    return 0;

}
