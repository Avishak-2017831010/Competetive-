#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,mn=INT_MAX;
    cin>>x>>y;
    double t;
    vector<double>vx;
    cin>>t;
    while(t--)
    {
        double x1,y1,v;
        cin>>x1>>y1>>v;
        double d=sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
        if((d/v)<mn)
        {
            mn=(d/v);
        }
    }
    //sort(vx.begin(),vx.end());
        cout<<setprecision(10)<<fixed<<(double)mn;

}
