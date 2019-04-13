#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,cnt=0;
    cin>>n;
    char arr[n+5][n+5];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

     for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i][j]=='X')
            {
                if(arr[i+1][j-1]=='X' && arr[i+1][j+1]=='X' && arr[i-1][j-1]=='X' && arr[i-1][j+1]=='X')
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
