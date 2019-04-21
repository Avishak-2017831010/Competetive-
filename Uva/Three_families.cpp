#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,mon;
        cin>>a>>b>>mon;

        double k=((2*a-b)/(a+b))*mon;
        if(k<=0){
            k=0;
        }
        cout<<(int)k<<endl;


}
}
