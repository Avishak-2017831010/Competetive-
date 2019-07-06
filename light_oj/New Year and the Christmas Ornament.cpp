#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,b,r;
    cin>>y>>b>>r;
    while(y){
    if(b>=y+1 && r>=y+2)
    {
        cout<<y+y+1+y+2;
        break;
    }
    else{
        y--;
    }
}
}

