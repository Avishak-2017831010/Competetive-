#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    string fin=s;
    string tt="";
    map<string,int>mp;
    int cnt=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s.substr(0,i+1)==s.substr(n-i-1,n-1)){
            cnt=i+1;
        }
    }

    cout<<s;

    for(int i=1;i<k;i++)
    {
        cout<<s.substr(cnt);
    }
}
