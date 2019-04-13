#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll int n,t=0;
    cin>>n;
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        ll int sum=1;
        for(int i=1; i<n-1; i++)
        {
            t=t*3;
            if(i%2==0)
            {
                t=t-1;
                t=t%1000000007;
            }
                else
                {
                    t=t+1;
                     t=t%1000000007;
                }
            }
            cout<<(t*sum)%1000000007;
        }
    }
