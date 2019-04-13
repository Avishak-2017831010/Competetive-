#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,mn,left=0,right=0;
       string s;
       cin>>n>>s;

       if(s[0]=='>' && s[n-1]=='<')
       {
           mn=0;
           cout<<mn<<endl;
       }
       else{

           int i=0,j=n-1;
         for(int i=0;i<n;i++)
         {
             if(s[i]=='>')
             {
                 break;
             }

             left++;
         }

          for(j=n-1;j>=0;j--)
          {
              if(s[j]=='<')
              {
                  break;
              }
              right++;
          }


           cout<<min(left,right)<<endl;

       }



   }
}
