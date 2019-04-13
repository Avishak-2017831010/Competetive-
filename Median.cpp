#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    map<int,int>mp;
    int n,k,a;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]=i;
    }

    if(mp[k]==0)
    {
        mp[k]=n;
    }

    if(mp[k]-0==n-mp[k]){
        printf("%d\n",0);
    }

    else{

        int p=mp[k]-0;
        int q=n-mp[k];

        cout<<p<<' '<<q<<endl;
    }




}
