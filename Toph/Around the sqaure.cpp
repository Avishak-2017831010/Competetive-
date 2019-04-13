#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int a,r1,r2,r3,r4;
    while(scanf("%d%d%d%d%d",&a,&r1,&r2,&r3,&r4)!=EOF)
    {
        double area;
        cout<<setprecision(3)<<fixed<<((a*a)-((0.25*pi)*((r1*r1)+(r2*r2)+(r3*r3)+(r4*r4))))<<endl;
    }
}
