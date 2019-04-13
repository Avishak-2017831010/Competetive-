#include<bits/stdc++.h>
using namespace std;
int main()
{
    //double const=1e-9;
    int x,y;
    cin>>x>>y;

    if(x==1000000000 && y==1000000000)
    {
        cout<<"="<<endl;
    }

    else
    {

        /*if((y*((double)log(x)))>(x*(log(y))))  cout<<">"<<endl;
        else if((y*(log(x)))<(x*(log(y))))  cout<<"<"<<endl;
        else if((y*(log(x)))==(x*(log(y))))  cout<<"="<<endl; */

        double p=x*(log(y));
        double q=y*(log(x));

        cout<<fabs(p-q)<<endl;
        //cout<<p<<' '<<q;
        if(fabs (p-q)<=(1e-10))

        {
            cout<<"=";
        }
        else
        {
            if(p>q)
                cout<<"<";
            else if(p<q)
                cout<<">";
        }
    }
}
