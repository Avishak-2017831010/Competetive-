#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char,int>mp;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

    int k=mp['a'];

    if(k>((s.size())/2))
       {
           cout<<s.size()<<endl;
       }
       else{

        cout<<(2*k-1)<<endl;
       }
}

