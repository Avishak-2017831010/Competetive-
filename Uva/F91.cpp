#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) {
                break;
        }
        else{
        while(n>0)
        {
            if(n<=100)
                n=n+11;
            else
                n=n-10;
        }

        cout<<n<<endl;
    }
}
}
