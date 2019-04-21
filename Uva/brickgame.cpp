#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int j;
            cin>>j;
            v.push_back(j);
        }
        sort(v.begin(),v.end());
        printf("Case %d: %d",j+1,v[v.size()/2]);
        v.clear();
        cout<<endl;

    }
}
