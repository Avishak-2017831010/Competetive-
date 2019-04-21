#include<bits/stdc++.h>
#include<stdio.h>
#define pi 3.141592653589793
using namespace std;
int main()
{

double x1,x2,x3,y1,y2,y3,k;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
k=(((x3-x1)*(x3-x2))+((y3-y1)*(y3-y2)))/(((x3-x1)*(y1-y2))-((y3-y1)*(x1-x2)))*(-1);
double g=-x2-x1+(k*y1)-(k*y2);
double f=-y2-y1-k-(k*x1)+(k*x2);
double c=(x1*x2)+(y1*y2)+(k*x1*x2)-(k*y1*y2);

double a=(g/-2);
double b=(f/-2);
double r=sqrt((a*a)+(b*b)-c);

printf("(x - %.3lf)^2 + (y - %.3lf)^2 = %.3lf^2",a,b,r);

/*(x - 3.000)^2 + (y + 2.000)^2 = 5.000^2
x^2 + y^2 - 6.000x + 4.000y - 12.000 = 0*/












}

