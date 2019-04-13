#include<bits/stdc++.h>
using namespace std;
vector<int>v1;
vector<int>v2;
vector<int>v3;
vector<int>v4;
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       v1.push_back(a);
       v2.push_back(b);
   }
   for(int arua=0;arua<n-1;arua++)
   {
      int x=(v1[arua]-v2[arua+1]);
      v3.push_back(x);
      int y=(v2[arua]-v1[arua+1]);
      v4.push_back(y);

   }
   sort(v3.rbegin(),v3.rend());
   sort(v4.rbegin(),v4.rend());
   cout<<v3[0]+v4[0];
}
