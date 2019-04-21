#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    while(1)
    {
        cin>>a>>b;
        int cnt=0;
        if(!a&&!b)
            break;
        else
        {
           cout<<(int)sqrt(b)-(int)sqrt(a-1)<<endl;;
        }
    }
}
