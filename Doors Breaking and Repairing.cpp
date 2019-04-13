#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v;

int main()

{
    ll int n,x,y;
    cin>>n>>x>>y;
    for(ll int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }

    if(x>y) // At any particular turn all the doors durability will be 0 //
    {
        cout<<n<<endl;

    }

    else
    {
        int cnt=0;
        // dont need to think about the doors which are > x because its impossible to make their durability 0 //

        for(int i=0; i<n;i++)
        {
            if(v[i]<=x)
                cnt++;
        }

        if(cnt%2) {cout<<ceil((double)cnt/(double)2);}
        else {cout<<(cnt/2);}

    }


}
