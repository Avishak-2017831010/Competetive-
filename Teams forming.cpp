#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i+=2)
    {
        cnt+=abs(v[i+1]-v[i]);
    }
    cout<<cnt<<endl;
}
