#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int>v;
    cout<<"1"<<' ';
    int x=1;
    int y=(n-2);
    if(y%3==0){
        y=y-1;
        x=x+1;
    }
    cout<<x<<' '<<y;
}
