#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s,tmp;
    cin>>n>>k>>s;
    map<char,int>mp;
    map<string,int>mps;
    vector<pair<string,int>>v;
    //sort(s.begin(),s.end());
    int cnt=1,mx=-1;
    s+="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
        }

        else
        {
            mp[s[i]]+=(cnt/k);
            cnt=1;
            mx=max(mx,mp[s[i]]);
        }

    }

    //mp[s.size()-1]+=(cnt/k);

    cout<<mx<<endl;

}
