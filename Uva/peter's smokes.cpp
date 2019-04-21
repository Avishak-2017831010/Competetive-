#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k){
    cout<<n+(int)(floor((double)(n-1)/(double)(k-1)))<<endl;
}
}
