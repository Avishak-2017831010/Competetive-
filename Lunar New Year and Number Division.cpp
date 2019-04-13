#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{
   ll int n,sum=0;
    vector<ll int>v;
    vector<ll int>v1;
    cin>>n;
    for(ll int i=0;i<n;i++)
    {
        ll int j;
        cin>>j;
        v.push_back(j);
    }

    sort(v.begin(),v.end());

    for(ll int i=0;i<(n/2);i++)
    {
        v1.push_back(v[i]+v[v.size()-1-i]);
    }

    for(ll int i=0;i<v1.size();i++)
    {
        sum+=v1[i]*v1[i];
    }

    cout<<sum<<endl;
}
