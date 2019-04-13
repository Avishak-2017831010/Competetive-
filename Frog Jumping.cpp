#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
      long long  int n,m,p;
        cin>>n>>m>>p;
        cout<<((n-m)*(p/2))+((p%2)*n)<<endl;

    }
}
