#include<bits/stdc++.h>
#define wtf long long
using namespace std;
int main()
{
    int flag=1;
    wtf int n,c;
    cin>>n;
    if(n%2==0)
    {
        cout<<(n/2)<<endl;
        flag=0;
    }
    else
    {
        for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
            {
                c=i;
                flag=0;
                break;

            }
        }
         if(flag)
    {
        cout<<flag<<endl;
    }
    else
    {
        cout<<1+((n-c)/2)<<endl;
    }
    }



}
