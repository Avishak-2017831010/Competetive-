#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll mn=min(a,b);
    ll arr[100000];
    arr[0]=1;
    ll j=0;
    ll temp;

    for(ll i=mn;i>=1;i--)
    {
        temp=0;

        for(ll k=0;k<=j;k++)
        {
            temp+=arr[k]*i;
            arr[k]=temp%10;
            temp/=10;
        }

        while(temp>0)
        {
            j++;
            arr[j]=temp%10;
            temp/=10;
        }
    }

    for(ll i=j;i>=0;i--)
        cout<<arr[i];
}
