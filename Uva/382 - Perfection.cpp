#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        if(n){
       int sum=0;
       for(int i=1;i<(n);i++)
       {
           if(n%i==0)
            sum+=i;
       }
       if(sum==n) printf("%5d  PERFECT\n",n);
      else if(sum<n) printf("%5d  DEFICIENT\n",n);
      else if(sum>n) printf("%5d  ABUNDANT\n",n);
    }
    else{
        cout<<"END OF OUTPUT"<<endl;
        break;
    }
}
}
