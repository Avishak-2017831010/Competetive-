#include<bits/stdc++.h>
typedef long long a;
using namespace std;
long long int sum(long long int n,long long int d)
{
    long long int k= (n)*(2+((n-1)*d));
    return k/2;
}
int main()
{
    long long int n;
    vector<long long int>v;
    set<long long int>st;
    set<long long int>::iterator it;
    cin>>n;
    for(long long int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            st.insert(sum((n/i),i));
            st.insert(sum(i,(n/i)));
        }

    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<' ';
    }
    st.clear();
}

