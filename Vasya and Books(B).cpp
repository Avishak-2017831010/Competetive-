#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    vector<int>v;
    queue<int>q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
       v.push_back(j);
       q.push(j);
    }
    for(int k=0;k<n;k++)
    {
        cnt=0;
        int x;
        cin>>x;
        while(q.front()!=x)
        {
            q.pop();
            cnt++;
        }
        cout<<cnt<<' ';

    }
}


