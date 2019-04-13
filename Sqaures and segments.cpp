#include<bits/stdc++.h>
using namespace std;


int main()

{
    int n;
    cin>>n;
    double sq=sqrt(n);
    if(sq*sq==n)
    {
        cout<<(int)(2.0*sq);
    }
    else //if(sq*sq<n)
    {
       if((n)<=((int)sq*((int)(sq)+1)))
       {
           cout<<(int)(2*((int)(sq))+1);
       }
       else
       {
           cout<<(int)(2*(int)(sq+1));
           ;
       }
    }
}
