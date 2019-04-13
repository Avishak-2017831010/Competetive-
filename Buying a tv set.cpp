#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int a,b,x,y;
    cin>>a>>b>>x>>y;
    ll int x1=x/__gcd(x,y);
    ll int y1=y/__gcd(x,y);

    cout<<min(a/x1,b/y1)<<endl;

}


/*1000000000000000000 1000000000000000000 999999866000004473 999999822000007597
*/
