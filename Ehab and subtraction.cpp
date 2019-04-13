#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    cnt++;
    if(cnt<m){
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1]-v[i])
        {
            cout<<v[i+1]-v[i]<<endl;
            cnt++;
        }
        if(cnt==m)
        {
            break;
        }
    }
    if(cnt<m){
        while(cnt!=m){
            cout<<"0"<<endl;
            cnt++;
        }
    }
}}
