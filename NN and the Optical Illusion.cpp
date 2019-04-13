#include<bits/stdc++.h>
using namespace std;
#define pie 3.14159265359
int main()
{
    double n,r;
    cin>>n>>r;

    //cout<<sin(pie/6)<<endl;

    double ang1=((2*pie)/(n));
    double fs=sin(ang1);

    double ang2=(pie-ang1)/2;
    double ss=sin(ang2);

    //double ang1=ang*((double)pie/(double)(180));

    //cout<<ang1<<endl;

    //double theta=asin(ang1);

    //double ang2=sin((pie-theta)/2);

    //cout<<(ang2)<<endl;

    //double ang2=angs*((double)pie/(double)(180));

    //cout<<ang1<<' '<<ang2<<endl;

    //double x=((r*ang1)/((2*ang2)-(ang1)));

    double x=((r*fs)/((2*ss)-(fs)));

   printf("%.7f",x);
}
