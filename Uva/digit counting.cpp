#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,temp;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        mp.clear();
        for(int i=1;i<=n;i++)
        {
            int com=i;
            while(com)
            {
                temp=com%10;
                mp[temp]++;
                com/=10;
            }
        }

        for(int i=0;i<9;i++)
        {
            cout<<mp[i]<<' ';
        }

        cout<<mp[9]<<endl;
    }
}
