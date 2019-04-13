#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1])
        {
            a=arr[i];
            break;
        }
    }

    for(int i=n-1;i>0;i--)
    {
        if(arr[i]!=arr[0])
        {
            b=arr[i];
            break;
        }
    }

    cout<<abs(a-b)<<endl;

}
