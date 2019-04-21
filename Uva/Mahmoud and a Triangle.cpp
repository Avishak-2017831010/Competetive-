#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int flag=1,cnt=0;
    cin>>n;
    vector<long long int>v(n,0);
    for(long long int i=0;i<n;i++){
       long long int j;
        cin>>j;
        v.push_back(j);

    }
    sort(v.begin(),v.end());
    if(v.size()<3){
        cout<<"NO"<<endl;
    }
    else if(v.size()==3){
        if(v[0]+v[1]>v[2]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        for(long long int i=0;i<=v.size()-2;i++){
            if(v[i]+v[i+1]>v[i+2]){
                   cout<<"YES"<<endl;
                   return 0;
            }
        }
        //cout<<v[0];
         //if(cnt>0)
        cout<<"NO";
        return 0;
    }
}
