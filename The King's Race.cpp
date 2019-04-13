#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,w,k,a,b;
    cin>>n>>a>>b;
    k=(abs(n-a)+abs(n-b));
    w=(abs(a-1)+abs(b-1));
    if(w<k){
        cout<<"White"<<endl;
    }
    else if(k<w){
        cout<<"Black"<<endl;
    }
    else if(k==w){
        cout<<"White"<<endl;
    }
}
