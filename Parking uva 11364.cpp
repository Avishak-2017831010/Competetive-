#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,t;
    cin>>t;
    while(t--){
    cin>>n;
    int arr[n+5];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    cout<<2*abs(v[v.size()-1]-v[0])<<endl;
}
}
