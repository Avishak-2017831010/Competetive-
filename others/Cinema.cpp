#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<pair<int,int>>v;
    vector<pair<int,int>>vp;
    map<int,int>mp;
    map<int,int>mp1;
    map<int,int>ind;
    map<int,int>indx;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    vector<int>v5;
    vector<int>v6;
    set<int>s;


    cin>>n;
    for(int i=0; i<n; i++)
    {

        int a;
        cin>>a;
        v3.push_back(a);
        mp[a]++;
    }

    int m;
    cin>>m;

    for(int i=1;i<=m;i++)
    {
        int p;
        cin>>p;
        v1.push_back(mp[p]);
    }


    for(int i=1;i<=m;i++)
    {
        int b;
        cin>>b;
        v2.push_back(mp[b]);
    }

    for(int i=0;i<v1.size();i++)
    {
        v.push_back(make_pair(v1[i],v2[i]));

        cout<<v1[i]<<' '<<v2[i]<<endl;
    }

    int ans=0;
    int mx=-INT_MAX,mx1=-INT_MAX,mx2=-INT_MAX;

    for(int i=0;i<v.size();i++)
    {
       if(v[i].first>mx || (v[i].first==mx && v[i].second>mx1) )
       {
           ans=i;
           mx=v[i].first;
           mx1=v[i].second;
       }


    }
    cout<<ans+1<<endl;
}
