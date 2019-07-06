#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>v;
    ll n;
    cin>>n;
    ll cnt=0;
    while(n)
    {
        cnt++;
        ll k=n;

        while(k)
        {
            v.push_back(k%10);
            k/=10;
        }

        sort(v.rbegin(),v.rend());
        n-=v[0];
        v.clear();
    }

    cout<<cnt<<endl;
}
