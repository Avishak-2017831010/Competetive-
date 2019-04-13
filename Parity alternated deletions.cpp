#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;

    int cnt1=0,cnt2=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        cnt+=k;
        v.push_back(k);
        if(k%2==0)
        {
            v1.push_back(k);
            cnt1++;
        }

        else
        {
            v2.push_back(k);
            cnt2++;
        }
    }
    sort(v.rbegin(),v.rend());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    //int d=abs(v1.size()-v2.size());
    int sum=0;
    if(v1.size()>=v2.size())
    {
        int d=v1.size()-v2.size();
        for(int k=0;k<d-1;k++)
        {
            sum+=v1[k];
        }

        cout<<sum<<endl;
    }

    else
    {
        int d=v2.size()-v1.size();
        for(int k=0; k<d-1; k++)
        {
            sum+=v2[k];
        }

        cout<<sum<<endl;
    }
}

