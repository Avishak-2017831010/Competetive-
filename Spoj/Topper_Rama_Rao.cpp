#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll power[70];
    power[0]=1;



    for(int i=1;i<=70;i++)
    {
        power[i]=2*power[i-1];
    }

    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
       ll n;
       cin>>n;
       ll k=__builtin_popcountll(n);

       cout<<n+1-power[k]<<' '<<power[k]<<endl;
    }
}
