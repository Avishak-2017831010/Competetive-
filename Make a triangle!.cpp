#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    vector<int>v;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    int k=v[2]-(v[0]+v[1])+1;
    if(k>=0){
        cout<<k<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}

