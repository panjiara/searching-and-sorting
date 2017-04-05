#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++)
   cin>>A[i];
   int index;
   for(int i=0;i<n-1;i++)
   {
       int min_nu=A[i];
       for(int j=i;j<n;j++)
       {
           if(A[j]<min_nu)
           {
             min_nu=A[j];
             index=j;
           }

        }
        int temp=A[index];
        A[index]=A[i];
        A[i]=temp;




   }
for(int i=0;i<n;i++)
    cout<<A[i]<<endl;



    return 0;
}
