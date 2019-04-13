#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int cnt=0;
    for(int suja=0;suja<s.size()-1;suja++)
    {
        if(s[suja]==s[suja+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
