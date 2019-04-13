#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;

    map<int,int>mp;
    set<int>st1;
    set<int>st2;
    set<int>::iterator it;


    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
        st2.insert(k);
        mp[k]++;
        if(mp[k]>2)
        {
            f=0;
            break;
        }
    }
    if(f)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]]==2)
            {
                st1.insert(v[i]);
            }

        }

        for(it=st1.begin();it!=st1.end();it++)
        {
            v1.push_back(*it);
        }

         for(it=st2.begin();it!=st2.end();it++)
        {
            //cout<<*it<<endl;
            v2.push_back(*it);
        }


        sort(v1.begin(),v1.end());
        sort(v2.rbegin(),v2.rend());

        cout<<v1.size()<<endl;
        for(int j=0;j<v1.size();j++)
        {
            cout<<v1[j]<<' ';
        }

        cout<<endl;

         cout<<v2.size()<<endl;
        for(int j=0;j<v2.size();j++)
        {
            cout<<v2[j]<<' ';
        }

        cout<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }


}
