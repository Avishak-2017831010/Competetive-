#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in,mg;
    cin>>in>>mg;

    vector<int>v1;
    vector<int>v2;
    vector<pair<int,int>>p;
    for(int i=0;i<in;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }

     for(int i=0;i<in;i++)
    {
        int b;
        cin>>b;
        v2.push_back(b);
    }

    int ans=0;

    for(int i=1;i<=2000;i++)
    {
        int tot=0;
        for(int j=0;j<v2.size();j++)
        {
            if(i*v1[j]>v2[j])
            {
                tot+=i*v1[j]-v2[j];
            }
        }

        if(tot<=mg)
            ans=i;
        else
            break;

    }

    cout<<ans<<endl;
}
