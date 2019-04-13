
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,x,y;
        cin>>a>>x>>y;
        for(int i=2;i<a;i++)
        {
            if(i%x==0 && i%y!=0)
                cout<<i<<' ';
        }

        cout<<endl;
    }

}
