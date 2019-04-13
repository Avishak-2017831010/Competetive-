#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,d,cnt=0;
    cin>>r>>d;
    int n;
    cin>>n;
    while(n--)
    {
        double x,y,ra;
        cin>>x>>y>>ra;

        double dur=sqrt((x*x)+(y*y));

        if(dur+ra<=r && dur>=(r-d+ra))
        {
            cnt++;
        }


    }

    cout<<cnt<<endl;
}
