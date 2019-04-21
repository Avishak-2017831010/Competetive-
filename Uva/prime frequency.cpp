#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    if(n==1){
        return 0;
    }
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    int m;
    cin>>m;
    vector<int>v;
    vector<char>vc;
    set<char>st;
    set<char>::iterator it;
    map<char,int>mp;
    for(int k=0; k<m; k++)
    {


        // map<char,int>iterator::it;
        string s;
        (cin>>s);
        cout<<"Case"<<' '<<k+1<<":"<<' ';
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        for(int j=0; j<s.size(); j++)
        {
            if(prime(mp[s[j]]))
            {
                v.push_back(mp[s[j]]);
                st.insert(s[j]);

            }
        }
        if(st.size()!=0){
        for(it=st.begin();it!=st.end();it++){
                cout<<*it;
            }
        }
        else{
            cout<<"empty";
        }
        cout<<endl;
        //cout<<"Case"<<' '<<k+1<<":"<<' '<<s[j];

        if(v.size()==0)
        {
            cout<<"empty"<<endl;
        }
         s.clear();
    }
    mp.clear();
   // s.clear();
}
