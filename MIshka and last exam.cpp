#include<bits/stdc++.h>
using namespace std;
#define boro long long
int main()
{
    vector<boro int>v;
    deque<int>dq;
    deque<int>::iterator it;
    boro int arr[10000009];
    boro int n,k;
    cin>>n;
    for(boro int i=0;i<(n/2);i++)
    {
        boro int k;
        cin>>k;
        v.push_back(k);

    }
    arr[0]=0;
    arr[n-1]=v[0];

   for(boro int i=1;i<=(n/2)-1;i++)
   {
        boro int d=abs((v[i]-v[i-1]));
       if(v[i]>v[i-1])
       {
           arr[i]=arr[i-1]+d;
           arr[n-i-1]=v[i]-arr[i];
       }
       else
       {
           arr[i]=arr[i-1];
           arr[n-i-1]=v[i]-arr[i];
       }
   }

    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<' ';
    }



}
