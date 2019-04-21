#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int flag=0;
    if(n<2) {return 0;}
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag) return 0;
        else return 1;
    }
}
int main()
{
    int k;
    while(cin>>k)
    {
        int n=k;
        int cnt1=0,ulta=0,cnt2=0,a,b,c;
        if(prime(n)==1)
        {
            cnt1++;
        }

        while(n)
        {
            a=(n%10);
            ulta=(ulta*10)+a;
            n/=10;
        }

        if(prime(ulta)==1)
        {
            cnt2++;                                                     /*17 is emirp.
                                                                                            18 is not prime.
                                                                                            19 is prime.
                                                                                            179 is emirp.
                                                                                            199 is emirp.*/
        }

        //cout<<ulta<<' '<<k<<endl;

        if(k==ulta && prime(k))
            cout<<k<<' '<<"is prime."<<endl;
        else{

        if(cnt1 && cnt2)
        {
            cout<<k<<' '<<"is emirp."<<endl;
        }
        else if(cnt1 && !cnt2)
        {
            cout<<k<<' '<<"is prime."<<endl;
        }
         else if(!cnt1 && !cnt2)
        {
            cout<<k<<' '<<"is not prime."<<endl;
        }




    }
    }
}
