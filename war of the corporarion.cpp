#include<bits/stdc++.h>
using namespace std;

int cnt=0,f=0,k;


int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int f=s1.find(s2);
    int cnt=0;
    while(f!=-1)
    {
        f=s1.find(s2,f+s2.size());
        cnt++;
    }

    cout<<cnt<<endl;
}
