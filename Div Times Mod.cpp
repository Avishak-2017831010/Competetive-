#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,kom=INT_MAX;
    cin>>n>>k;
    for(int i=1;i<k;i++)
    {
        if(n%i==0){
        int m=((n/i)*k)+i;
        if(m<kom)
        {
            kom=m;
        }
    }
    }
    cout<<kom<<endl;
}
