#include<bits/stdc++.h>
#define p 3.1416
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       double r;
       cin>>r;

        cout<<fixed<<setprecision(2)<<"Case "<<i<<':'<<' '<<(8*r*r)-(2*(p*r*r))<<endl;
            }
}
