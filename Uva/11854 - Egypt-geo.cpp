#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<double>v;
set<int>st;
map<int,int>mp;
int main()
{

    double a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(!a&&!b&&!c)
            break;
        else
        {
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            sort(v.begin(),v.end());

            if(v[0]+v[1]>v[2])
            {
                if((v[2]*v[2])==(v[1]*v[1])+(v[0]*v[0])){
                    cout<<"right"<<endl;
                }
                else{
                    cout<<"wrong"<<endl;
                }
            }
            else
                cout<<"wrong"<<endl;
        }
        v.clear();
    }




}
