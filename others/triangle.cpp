#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()

{
    double a,b,c,p,q,t,total,fin;
    char ch;
    cin>>t;
    double x=1.00/4.00;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>p>>ch>>q;
        double s=((double)(a+b+c))/2.00;
        //cout<<s<<endl;
         total=sqrt((s*(s-a)*(s-b)*(s-c)));
        //cout<<total<<endl;

        //cout<<x<<endl;
        double y=0.25*(double)p;
        //cout<<y<<endl;
        double z=0.25*(double)q;

        double andu=(y+z+0.25);

        //cout<<andu<<endl;

        fin=(andu)*(double)total;

        double ans=total-fin;

         //printf("%.2lf",ans);

        cout<<"Case "<<i<<": "<<setprecision (2) << fixed<<ans<<endl;




       // printf("%.1lf\n",ans);

}
}
