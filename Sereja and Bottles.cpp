#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
        v1.push_back(x);
        v2.push_back(y);
    }
    for(int k=0;k<v1.size();k++){
        for(int p=0;p<v2.size();p++){
            if(v1[k]==v2[p] && k!=p){
                cnt++;

            }
        }
    }
    cout<<n-cnt;
}
