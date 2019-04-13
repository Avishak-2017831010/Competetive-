#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        if(sum+j==360 || sum-j==0)
        {
            sum=0;
        }
        else{
        sum+=j;
        }
    }
    if(sum==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
