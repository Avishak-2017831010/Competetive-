#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    while(cin>>n)
    {
        ll t=((n-1)/2)+1;

        ll sum=(2*t*t)-1;

        ll temp=sum+(sum-2)+(sum-4);

        cout<<temp<<endl;

    }
}
