#include<bits/stdc++.h>
using namespace std;
int main()

{
    int k,n;
    cin>>k>>n;
    set<int>st;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int el;
        cin>>el;
        mp[el]++;
        st.insert(el);
        if(st.size()==k)
        {
            cout<<"1";
            st.clear();

                for(int p=0;p<k;p++)
                {
                    mp[p+1]--;
                    if(mp[p+1]>0)
                    {
                        st.insert(p+1);
                    }
                }
        }
        else
        {
            cout<<"0";
        }
    }
}
