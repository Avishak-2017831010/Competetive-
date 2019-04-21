#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int>v;
set<int>st;
map<int,int>mp;
int main()
{

    ll n,cnt1=0;
    while(cin>>n)
    {
        cnt1++;
        v.clear();
        if(!n){break;}
        else
        {
            ll sum1=0,sum2=0,cnt=0;
            for(ll i=0;i<n;i++)
            {
                ll k;
                cin>>k;
                v.push_back(k);
                sum1+=k;
            }
            cnt=(sum1/n);
            for(ll j=0;j<v.size();j++)
            {
                if(v[j]>cnt)
                {
                    sum2+=v[j]-cnt;
                }
            }
            cout<<"Set #"<<cnt1<<endl<<"The minimum number of moves is "<<sum2<<endl<<endl;
        }
    }




}
