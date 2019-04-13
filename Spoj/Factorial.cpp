#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()

{
    ll test;
    cin>>test;
    while(test--)
    {
        ll int cnt=0;
        int n;
        cin>>n;
        while(n)
        {
            cnt+=(n/5);
            n=(n/5);

        }

        cout<<cnt<<endl;
    }


}
