#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>2){
    cout<<n-1<<' '<<n-1<<endl;
}
else{
 if(n==2){
    cout<<n<<' '<<n<<endl;
}
else{
    cout<<"-1"<<endl;
}
}
}
