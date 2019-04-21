#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll int n,k;
    cin>>n>>k;
    //set<ll int>st;
    vector<ll int>v(10009,0);
    vector<ll int>v1;
    for(int i=0;i<n;i++){
        ll int j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    for(ll int j=0;j<v.size();j++){
        if((v[j]%k) || !(binary_search(v1.begin(),v1.end(),v[j]/k))){
            //st.insert(v[j]);
            v1.push_back(v[j]);
        }
    }
    cout<<v1.size()<<endl;

}
