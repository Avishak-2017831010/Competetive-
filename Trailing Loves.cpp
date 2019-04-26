#include<bits/stdc++.h>
#define mx 1000006
#define ll long long
int vis[mx];


ll int power(ll int n,ll int b)
{
    ll int flag=0;
    while(n)
    {
        n/=b;
        flag+=n;
    }

    return flag;

}

using namespace std;
int main()
{

   ll int n,b,cnt=0;
    cin>>n>>b;

    vector<ll int>v;
    vector<pair<ll int,ll int>>vp;

    for(ll int i=2; i<=sqrt(b); i++)
    {
        if(b%i==0)
        {
            cnt=0;

            while(b%i==0)
            {
                b/=i;
                cnt++;
            }

            vp.push_back(make_pair(i,cnt));
        }
    }

    if(b>1)
    {
        vp.push_back(make_pair(b,1));
    }


    ll int mn=1e18;
    ll int temp;

    for(ll int i=0; i<vp.size(); i++)
    {
        temp=power(n,vp[i].first);
        mn=min(mn,temp/vp[i].second);

    }


    cout<<mn<<endl;


}
