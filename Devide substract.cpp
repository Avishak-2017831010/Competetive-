#include<bits/stdc++.h>
using namespace std;
long long int prime(long long int m,long long int cnt)
{
   long long int k=m;
    if(m%2==0)
    {
        k=2;
    }
    else{
    for(long long int i=3; i<=sqrt(m); i+=2)
    {
        if(m%i==0)
        {
            k=i;
            break;
        }
    }
    }
    m=m-k;
    if(m!=0)
    {
        return prime(m,cnt+1);
    }
    else
    {
        return cnt;
    }

}

int main()
{
   long long int n;
    cin>>n;
        long long int x=prime(n,0);
        cout<<x+1<<endl;
    }

