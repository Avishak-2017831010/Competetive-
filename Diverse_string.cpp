#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       int cnt=0;
       sort(s.begin(),s.end());
       for(int i=1;i<s.size();i++)
       {
           if((s[i]-s[i-1])==1)
           {

           }
           else
           {
               cnt=1;
               break;
           }
       }

       if(!cnt) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }
}
