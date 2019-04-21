#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    map<int,int>mp;
    while((scanf("%d",&n))!=EOF)
    {
        if(mp[n]==0)
        {
            v.push_back(n);
            mp[n]++;
        }
        else{
        mp[n]++;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' '<<mp[v[i]]<<endl;
    }
}
