#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    cin>>s;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
            i++;
    }
    }
    cout<<cnt<<endl;

    if(cnt%2==0)
        cout<<"no";
    else
        cout<<"yes";
}
