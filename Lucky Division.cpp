#include<bits/stdc++.h>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=stoi(s);
    bool flag=0;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==s.size())
    {
        cout<<"YES";
    }
    else
    {
        if(x%4==0 || x%7==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
