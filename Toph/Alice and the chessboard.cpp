#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,e1,e2;
        cin>>s1>>s2>>e1>>e2;
        //cout<<abs(e1-s1)<<endl;
        //cout<<abs(e2-s2)<<endl;
        if((abs(e1-s1))==abs(e2-s2))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
