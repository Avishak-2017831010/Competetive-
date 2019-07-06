#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int arr[10000];
   long long int t,cnt=0,n;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<10000;i++)
    {
        arr[i]=0;
    }
        for(int i=0;i<6;i++)
        {
            cin>>arr[i];
        }
        cin>>n;
        for(int i=6;i<=n;i++)
        {
            arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;
        }
        printf("Case %d: %lld\n",++cnt,arr[n]%10000007);
    }
}
