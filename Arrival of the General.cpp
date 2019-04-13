#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,mnt=0;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(v[i]<v[i+1]){
                swap(v[i],v[i+1]);
                cnt++;
            }
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                mnt++;
            }
        }
    }
    cout<<cnt+mnt;

}
