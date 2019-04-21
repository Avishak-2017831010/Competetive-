#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        set<ll>st;
        vector<ll>v;
        ll a,b,c,flag=0;
        cin>>a>>b>>c;
        st.insert(a); v.push_back(a);
        st.insert(b); v.push_back(b);
        st.insert(c); v.push_back(c);

        sort(v.begin(),v.end());
        if(v[0]+v[1]<=v[2])
        {
            //Case 1: Invalid
            cout<<"Case "<<i<<':'<<' '<<"Invalid"<<endl;
        }
        else
        {
            if(st.size()==1) cout<<"Case "<<i<<':'<<' '<<"Equilateral"<<endl;
           else if(st.size()==2) cout<<"Case "<<i<<':'<<' '<<"Isosceles"<<endl;
           else if(st.size()==3) cout<<"Case "<<i<<':'<<' '<<"Scalene"<<endl;

        }

    }
}
