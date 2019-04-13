#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v1.push_back(j);
    }
    for(int k=0;k<m;k++)
    {
        int x,y;
        cin>>x>>y;
        int tp=min(v1[x-1],v1[y-1]);
        sum+=tp;
}
cout<<sum<<endl;
}

