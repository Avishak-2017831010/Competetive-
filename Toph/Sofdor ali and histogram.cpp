#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int t;
    cin>>t;
    for(ll int i=1;i<=t;i++)
    {
        ll int mx=-1;
        ll int n;
        vector<int>v;
        cin>>n;
        for(ll int j=0;j<n;j++)
        {
            ll int k;
            cin>>k;
            mx=max(k*(n-j),mx);
        }

        cout<<"Case "<<i<<':'<<' '<<mx<<endl;
    }
}
