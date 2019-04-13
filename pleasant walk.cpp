#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,mx=0,m;
    cin>>n>>m;
    int arr[n+9];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n-1;i++){
            cnt=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]!=arr[j])
                cnt++;
            else break;
        }
        if(cnt>mx) mx=cnt;

    }

    if(mx)cout<<mx<<endl;
    else cout<<"1"<<endl;
}
