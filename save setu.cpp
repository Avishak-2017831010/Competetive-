#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,k;
    cin>>k;
    while(k--)
    {
        string s;
        int a;
        cin>>s;
        if(s[0]=='d')
        {
            cin>>n;
            sum+=n;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
}
