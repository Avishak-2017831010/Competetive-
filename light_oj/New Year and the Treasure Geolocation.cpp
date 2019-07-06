#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p,q;
        cin>>p>>q;
        v1.push_back(p);
        v2.push_back(q);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int j=0;j<n;j++)
    {
        int x,y;
        cin>>x>>y;
        v3.push_back(x);
        v4.push_back(y);
    }
    sort(v3.begin(),v3.end());
    sort(v4.begin(),v4.end());

    cout<<v1[v1.size()-1]+v3[0]<<' '<<v2[0]+v4[v4.size()-1];
}
