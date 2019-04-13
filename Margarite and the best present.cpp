#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        if(p%2==0 && q%2==0){
        cout<<p+((q-p)/2)<<endl;
        }
        else if(p%2==0 && q%2!=0){
            cout<<-1*(((q-p)/2)+1)<<endl;
        }
        else if(p%2!=0 && q%2==0){
        cout<<((q-p+1)/2)<<endl;
        }
        else if (p%2!=0 && q%2!=0){
            cout<<-q+((q-p)/2)<<endl;

    }
    }

}
