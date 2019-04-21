#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       double d,v,u;
        cin>>d>>v>>u;
        if(v){
        if(u>v)
        {
            double k=-(d/u)+(d/(sqrt((u*u)-(v*v))));
            printf("Case %d: %.3lf",i+1,k);
            cout<<endl;
        }
        else{
            printf("Case %d: can't determine",i+1);
            cout<<endl;
        }
    }
    else{
        printf("Case %d: can't determine",i+1);
            cout<<endl;
    }
}
}
