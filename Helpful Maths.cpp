#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char>v;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+'){
        v.push_back(s[i]);
        //cout<<s[i]<<' ';

    }
    }
    sort(v.begin(),v.end());
    for(int j=0;j<v.size();j++)
    {
        if(j==v.size()-1){
            cout<<v[j];
            break;
        }
        cout<<v[j]<<'+';
    }
}
