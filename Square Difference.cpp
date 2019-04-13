#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
int prime(ll int n)
{
    int flag=1;
    ll int i,j;
    if(n<2){
        return 0;
    }
    else{
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        return 1;
    }
    else{
        return 0;
    }

}
}

int main()
{
    ll int t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll int a,b;
        cin>>a>>b;
        if(prime(a+b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}

