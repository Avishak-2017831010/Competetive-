#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    while(cin>>n)
{

    int r=1,c=1,cnt=1;

    while(cnt<n)
    {
        cnt++,c++;
        if(cnt==n)
        {
            break;
        }

        while(c>1 && cnt<n)
        {
            cnt++;
            r++;
            c--;
        }
         if(cnt==n)
        {
            break;
        }
        r++,cnt++;
         if(cnt==n)
        {
            break;
        }
        while(r>1 && cnt<n)
        {
            c++,r--,cnt++;
        }

    }

    printf("TERM %d IS ",n);

    cout<<r<<'/'<<c<<endl;
}
}
