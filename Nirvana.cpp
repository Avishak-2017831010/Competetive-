#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll int mx(ll int n)
{
    if(n<10 && n>1)
    {
        return n;
    }

    else if(n<=1)
    {
        return 1;
    }
    else
    {
        ll int a=(n%10)*mx(n/10);
        ll int b=9*mx((n/10)-1);
        return max(a,b);
    }

}
int main()
{
    ll int n;
    cin>>n;
    cout<<mx(n)<<endl;
}
