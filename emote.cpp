
#include<bits/stdc++.h>
using namespace std;
 int main()
{
    long long int n,m,k;
    cin>>n>>m>>k;
    vector<long long int>v;

    for(long long int i=0;i<n;i++)
    {
       long long int val;
       cin>>val;
       v.push_back(val);
    }

    sort(v.rbegin(),v.rend());
    long long int cnt=m/(k+1);
    long long int s=(k*v[0])+v[1];
    cout<<(s*cnt)+((m%(k+1))*v[0])<<endl;
}
