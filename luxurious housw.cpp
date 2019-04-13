#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    for(int j=0;j<v.size()-1;j++){
        sort(v.rbegin()+j+1,v.rend());
        cout<<v[j+1];
        if(v[j+1]>v[j]){
            //cout<<v[j+1]-v[j]+1+1<<' ';
        }
        else{
//cout<<"0"<<' ';
        }
    }
}
