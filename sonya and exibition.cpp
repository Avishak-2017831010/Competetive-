#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
     cin>>n>>k;
     char s[10000];
     for(int i=0;i<n;i++)
     {
         if(i%2) s[i]='0';
         else s[i]='1';
     }


     for(int j=0;j<k;j++)
     {
         int a,b;
         cin>>a>>b;
     }

     for(int i=0;i<n;i++)
     {
         cout<<s[i];
     }


}
