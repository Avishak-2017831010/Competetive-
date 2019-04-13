#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    int n,flag=0;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string j;
        cin>>j;
        mp[j]++;
        if(mp[j]==1)cout<<"OK"<<endl;
        else cout<<j<<mp[j]-1<<endl;
    }
}

