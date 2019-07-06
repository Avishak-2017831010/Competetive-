#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        vector<ll int>v;
        ll int a,b,c;
        //cin>>a>>b>>c;
        scanf("%lld%lld%lld",&a,&b,&c);
        v.push_back(a*a);
        v.push_back(b*b);
        v.push_back(c*c);
    sort(v.rbegin(),v.rend());
    if(v[0]==v[1]+v[2])
    {
        printf("Case %d: yes\n",i);
    }
    else
    {
        printf("Case %d: no\n",i);
    }
}
}
