#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int>v;
    map<int,int>mp;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        mp[j]++;
        v.push_back(j);
    }
    sort(v.rbegin(),v.rend());
    for(int j=0;j<v.size();j++)
    {

    }

}
