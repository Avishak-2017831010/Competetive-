#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    if(k!=0){
    swap(v[k-1],v[v.size()-1]);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }

}
