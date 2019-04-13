#include<bits/stdc++.h>
#define lomba long long
using namespace std;
lomba int ongko(lomba int n)
{
    lomba int k=0;
    while(n)
    {
        k+=n%10;
        n=n/10;
    }
    return k;
}
int main()
{
    lomba int n,m=0;
    cin>>n;
    while(10*m+9<=n)
    {
        m=10*m+9;
    }
    cout<<ongko(m)+ongko(n-m)<<endl;
}
