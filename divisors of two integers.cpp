#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,goon=1;
    cin>>n;
    map<int,int>mp;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
        mp[j]++;

    }
    sort(v.begin(),v.end());
    int foyla=v[n-1];
    for(int j=1;j<v.size();j++)
    {
        if(mp[v[j]]==1 && foyla%v[j]==0)
        {
            v[j]=-100;
        }
    }
        v[n-1]=-100;
        sort(v.rbegin(),v.rend());
        int dosra=v[0];
        cout<<foyla<<' '<<dosra;
    }


