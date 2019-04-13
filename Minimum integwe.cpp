#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r,flag=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q>>r;

        if(p>(r*1)){
            cout<<r<<endl;
        }

        else
        {
            int k=(q/r);
            cout<<(k+1)*r<<endl;
        }
    }
}
