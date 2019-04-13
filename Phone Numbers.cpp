#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    string s;
    cin>>n;
    cin>>s;
    int m=floor(double(n/11));
    for(int i=0;i<s.size();i++){
        if(s[i]=='8'){
            cnt++;
        }
    }
        cout<<min(m,cnt)<<endl;

}
