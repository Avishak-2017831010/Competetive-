#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    vector<int>a1;
    vector<int>a2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        a1.push_back(j);

    }
    cin>>m;
    for(int p=0;p<m;p++)
    {
        int k;
        cin>>k;
        for(int x=0;x<a1.size();x++)
        {
            if(k+1==a1[x] ||  k==a1[x] || k-1==a1[x])
            {
                cnt++;
                a1[x]=-1;

                break;
            }
        }
    }
    cout<<cnt<<endl;
}


