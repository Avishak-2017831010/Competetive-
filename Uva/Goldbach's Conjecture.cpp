#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int flag=0;
    if(n==1)
    {
        return 0;
    }
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(prime(i)==1 && prime(n-i)==1)
            {
                flag=1;
                cout<<n<<' '<<'='<<' '<<i<<' '<<'+'<<' '<<(n-i)<<endl;

                break;
            }
        }
        return flag;
    }
}
int main()
{
    int n;
    cin>>n;
    prime(n);

}
