#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll int n,total,cnt=0;
    cin>>n>>total;
    vector<ll int>v;
    vector<ll int>v1;


    for(ll int i=0; i<n; i++)
    {
        ll int j;
        cin>>j;
        //scanf("%d",&j);
        v.push_back(j);
        v1.push_back(j);
    }

    sort(v1.begin(),v1.end());

    for(ll int i=0; i<v.size(); i++)
    {
        if(v[i]<=total && v1[i]<=total)
        {
            cnt++;
            total=total-v[i];
        }

        else
        {

            if(v[i]>total && v1[i]>total)
            {
                break;
            }
            else if(v[i]>total && v1[i]<=total && i<v.size()-1)
            {
                continue;
            }

            else if(v[i]>total && v1[i]<=total && i==v.size()-1)
            {
                i=-1;
                continue;
            }
        }

        //cout<<cnt<<endl;

    }

    cout<<cnt<<endl;

}
