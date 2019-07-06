#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int>vs;
vector<int>vx;
vector<int>va;

ll bin;

int main()
{
    ll s,x;
    cin>>s>>x;
    ll a=s,b=x;
    //binary(s,vs);

    while (s > 0)

    {

        bin = s % 2;

        vs.push_back(bin);

        s /= 2;

    }

    //binary(x,vx);

    while (x > 0)

    {

        bin = x % 2;

        vx.push_back(bin);

        x /= 2;

    }

    bool f=1;
    ll k=(a-b);

    if((k%2)!=0)
    {
        f=0;
        cout<<"0"<<endl;
        return 0;
    }

    k/=2;


    while (k > 0)

    {

        bin = k % 2;

        va.push_back(bin);

        k /= 2;

    }

    if(vx.size()==0)
        vx.push_back(0);
    if(va.size()==0)
        va.push_back(0);

    int cnt=0;

    if(vx.size()>=va.size())
    {
        for(int i=0;i<va.size();i++)
        {
            if(vx[i]==0 && va[i]==0)
                cnt++;
            else if(vx[i]==1 && va[i]==0)
                cnt+=2;
            else if(vx[i]==0 && va[i]==1)
                cnt++;
        }

        cnt+=vx.size()-va.size();
        cout<<cnt<<endl;

    }

    else
    {
        for(int i=0;i<vx.size();i++)
        {
            if(vx[i]==0 && va[i]==0)
                cnt++;
            else if(vx[i]==1 && va[i]==0)
                cnt+=2;
            else if(vx[i]==0 && va[i]==1)
                cnt++;
        }

        cnt+=va.size()-vx.size();
        cout<<cnt<<endl;



    }

    for(int i=0;i<vx.size();i++)
        cout<<vx[i];
    cout<<endl;

    for(int i=0;i<va.size();i++)
        cout<<va[i];
    cout<<endl;




}
