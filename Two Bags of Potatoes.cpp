#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,milaiya;
    //gona=0;
    cin>>y>>k>>milaiya;
    int bara=k;
    vector<int>v;

    while(k)
    {
        if(k<=milaiya)
        {
            if(k>y)
            {
                v.push_back(k-y);
            }

            k+=bara;
        }
        else{
            break;
        }
    }

    if(v.size()==0) cout<<"-1"<<endl;
    else
        for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' '<<' ';
    }
}
