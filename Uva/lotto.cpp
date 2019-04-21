#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[20],cnt=0;
    while(cin>>n && n)
    {
        if(cnt==0)
        {

        }
        else{
           cout<<endl;
        }
        cnt++;


        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    for(int l=k+1;l<n;l++)
                    {
                        for(int m=l+1;m<n;m++)
                        {
                            for(int p=m+1;p<n;p++)
                            {
                                cout<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<' '<<arr[l]<<' '<<arr[m]<<' '<<arr[p]<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
}
