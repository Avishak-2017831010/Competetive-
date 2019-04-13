#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>v;
    int cnt=0;

for(int i=1;i<=min(m,n);i++)
{
    if(n%i==0)
    {
        v.push_back(i);
    }
}

for(int i=0;i<v.size();i++)
{
    //cout<<v[i]<<endl;

    if((n/v[i])<=m)
        cnt++;

}

cout<<cnt<<endl;

}

//cout<<cnt<<endl;

