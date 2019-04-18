#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,x,y,cnt=0;
    cin>>l>>r>>x>>y;
    if(y%x==0)
    {
        int tmp=(y/x);

        for(int i=l;i<=sqrt(tmp);i++)
        {
            if(tmp%i==0)
            {
               int a=i;
               int b=(tmp/i);

               if(__gcd(a,b)==1){

                    if(a*x>=(l) && a*x<=(r) && b*x>=(l) && b*x<=(r) && i*i!=tmp)
                    {
                        cnt+=2;
                    }

                    else if(a*x>=(l) && a*x<=(r) && b*x>=(l) && b*x<=(r) && i*i==tmp){

                        cnt++;
                    }
               }
            }
        }
    }

    cout<<cnt;
}
