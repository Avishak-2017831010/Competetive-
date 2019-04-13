#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    int n,mn=INT_MAX,mx=-INT_MAX,a,b,f=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        mn=min(mn,a);
        mx=max(mx,b);
    }

    for(int i=0;i<v.size();i++){
        if(v[i].first==mn && v[i].second==mx)
        {
            cout<<i+1<<endl;
            f=1;
            break;
        }
    }

    if(f==0){
        cout<<"-1"<<endl;
    }

}
