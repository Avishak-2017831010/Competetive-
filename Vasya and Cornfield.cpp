#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,d,x,y,x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,a;
    cin>>n>>d;
    //a(x1,y1),b(x2,y2),c(x3,y3),d(x4,y4);
    x1=0;
    y1=d;
    x2=d;
    y2=0;
    x3=n;
    y3=n-d;
    x4=n-d;
    y4=n;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        a1=0.5*abs((x1*y2)+(x2*y)+(x*y1)-(x2*y1)-(x*y2)-(x1*y));
        a2=0.5*abs((x2*y3)+(x3*y)+(x*y2)-(x3*y2)-(x*y3)-(y*x2));
        a3=0.5*abs((x3*y4)+(x4*y)+(x*y3)-(x4*y3)-(x*y4)-(y*x3));
       a4=0.5*abs((x1*y4)+(x4*y)+(x*y1)-(x4*y1)-(x*y4)-(x1*y));
       a=((double)1/(double)2)*abs((x1*y2)+(x2*y3)+(x3*y4)+(x4*y1)-(x2*y1)-(y2*x3)-(x4*y3)-(x1*y4));
       double sum=a1+a2+a3+a4;
       if(sum==a){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }



    }


}
