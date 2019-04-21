#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int cnt=0;
    while(cin>>n)
    {
        if(n>0)
        {
            cnt++;
           long long int k=ceil((3+(sqrt(9+8*n)))/2);

           cout<<"Case "<<cnt<<':'<<' '<<(long long int)k<<endl;
        }

        else
            break;
    }
}
