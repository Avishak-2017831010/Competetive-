#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v1;
        vector<int>v2;
        int a,b,k,l,sum1=0,sum2=0,ulta1=0,ulta2=0,m,n;
        cin>>a>>b;
        while(a)
        {
            k=a%10;
            ulta1=ulta1*10+(k);
            a/=10;
        }

         while(b)
        {
            l=b%10;
            ulta2=ulta2*10+(l);
            b/=10;
        }

        //cout<<ulta1<<' '<<ulta2;

        sum1=ulta1+ulta2;

         while(sum1)
        {
            m=sum1%10;
            sum2=sum2*10+(m);
            sum1/=10;
        }

        cout<<sum2<<endl;
    }
}
