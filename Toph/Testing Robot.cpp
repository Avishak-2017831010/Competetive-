#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,cnt=0;
        map<int,int>mp;
        cin>>m>>n;
        mp[n]=1;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                n--;
                mp[n]=1;
            }
            else
            {
                n++;
                mp[n]=1;
            }
        }

        for(int i=n-m;i<=(m+n);i++)
        {
            if(mp[i]==1){
                cnt++;
            }
        }

        cout<<cnt<<endl;
}
}
