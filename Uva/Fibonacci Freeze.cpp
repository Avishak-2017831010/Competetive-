#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int a[5005]={0};
    a[0]=0;
    a[1]=1;
    for(int i=2;i<5005;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(cin>>n)
    {
        //The Fibonacci number for 5 is 5
        cout<<"The Fibonacci number for"<<' '<<n<<' '<<"is"<<' '<<a[n]<<endl;
    }
}
