#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
    vector<long long int>v1;
    vector<int>v2;
    vector<int>v3;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v1.push_back(x+y);
    }
    sort(v1.rbegin(),v1.rend());
    cout<<v1[0];
}
