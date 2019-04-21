#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int temp=b+(c%a);

        if(temp<=a) cout<<"Case "<<i<<':'<<' '<<temp<<endl;
        else cout<<"Case "<<i<<':'<<' '<<temp%a<<endl;

    }
}
