
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,b,c;
    cin>>n>>a>>b>>c;

    double k1=(b*n);
    double k2=ceil((c/a))*n;
    double k3=ceil((c/a)*n);

    cout<<(int)min(min(k1,k2),k3)<<endl;


}
