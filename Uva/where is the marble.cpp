#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>v2;
    map<int,int>mp;
    int n,m;
    bool test=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int k;cin>>k;
        v1.push_back(k);
        mp[k]=i+1;
    }
    for(int x=0;x<m;x++)
    {
        int y;
        cin>>y;
        v2.push_back(y);
    }
    for(int p=0;p<v2.size();p++)
    {
        printf("Case# %d\n",p+1);
        for(int q=0;q<v1.size();q++)
        {
            if(v2[p]==v1[q])
            {
                test =1;
               printf("%d Found at %d\n",v2[p],q+1);
               break;
            }
        }
        if(test==0)
            printf("%d not found\n",v2[p]);
    }
}
