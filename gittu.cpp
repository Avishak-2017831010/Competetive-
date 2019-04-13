#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[0]+i)
        {

        }
        else{
            flag=i;
            break;
        }
    }
    if(flag) cout<<flag+1<<endl;
    else cout<<"-1"<<endl;
}
