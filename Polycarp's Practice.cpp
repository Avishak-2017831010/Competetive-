#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    map<int,int>mp;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
        v1.push_back(k);
        mp[k]=i;
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<m;i++)
    {
       sum+=v[i];
       cout<<mp[v[i]]<<endl;
       //v1.push_back(mp[v[i]]);
    }
    //v1.push_back(n);
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<v1.size();j++)
       {
           if(v[i]==v[j]){
            cout<<j<<' ';
            i=
           }
       }
   }

}
