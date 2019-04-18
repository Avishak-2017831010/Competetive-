#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=0,cnt=0,chk=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        chk++;
        sum+=(s[i]-'0');

        if(sum%3==0 || (s[i]-'0')%3==0 || chk==3)
        {
            cnt++;
            sum=0;
            chk=0;
        }
    }

    cout<<cnt<<endl;
}
