#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=1;
    while(cin>>a>>b && (a!=0&&b!=0))
    {
        printf("Case %d: ",cnt++);
        if(a<=b)
        {
            cout<<"0"<<endl;
        }
        else if(a>b && b*26<=a+3)
        {
            cout<<"impossible"<<endl;
        }

        else
        {
            cout<<(int)ceil((double)(a-b)/double(b))<<endl;
        }
    }
}
