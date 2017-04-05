#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int hi=n-1,lo=0;
    int x;
    cin>>x;
    while(hi>=lo&&A[lo]<=x&&A[hi]>=x)
    {
        int pos=(double)((hi-lo)/(A[hi]-A[lo]))*(x-A[lo])+lo;
        if(A[pos]==x)
        {
            cout<<pos<<endl;
            break;
        }
        if(A[pos]<x)
            lo=pos+1;
        else
            hi=pos-1;
    }


    return 0;
}
