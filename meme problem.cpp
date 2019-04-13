#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double k;
        cin>>k;
        if(k*(k-4)<0){
            cout<<"N"<<endl;
        }
        else{
            printf("Y ");
            double s=sqrt(k*(k-4))/2;
            //cout<<s;
            double j=k/2;
            double b=j-s;
            //cout<<b;
            double a=k-b;
            //cout<<b<<' '<<a<<endl;
            printf("%.9lf %.9lf",a,b);
            cout<<endl;

        }
    }
}
