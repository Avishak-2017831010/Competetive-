#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    map<int,int>mp;
    vector<pair<int,int>>v;

    int n,k,cnt=0;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }

        sort(v1.rbegin(),v1.rend());
        int tem=v1[k-1];

        for(int i=0;i<n;i++)
        {
            if(v1[i]==tem)
            {
                v3.push_back(v2[i]);
            }
        }

        sort(v3.begin(),v3.end());
        for(int p=0;p<v3.size();p++)
        {
            if(v3[p]==v3[0])
            {
                cnt++;
            }
        }

        cout<<tem<<endl;

        cout<<cnt<<endl;
    }


