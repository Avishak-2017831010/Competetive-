#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int f=0,n;

    cin>>n>>s;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i+1]<s[i])
        {
            f=1;
            cout<<"YES"<<endl<<i<<' '<<i+1;
            break;

        }
    }

    if(!f)
    {
        cout<<"NO"<<endl;
    }
}
