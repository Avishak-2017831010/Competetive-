#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //vector<string>v;
    set<char>st;

    while(t--)
    {
        string s;
        cin>>s;
        string s2=s;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        if(st.size()!=1)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}
