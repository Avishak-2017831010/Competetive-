#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int su=0,si=0;
    vector<char>vc;
    vector<int>vi;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            vc.push_back(s[i]);
        }
        else{
            if(s[i+1]<65 || s[i+1]>122){
                int a=s[0]-'0';
                si+=su;
                su=10*(si-'0')+(s[i+1]-'0');
            }
            else{
                vi.push_back(s[i]-'0');
            }
             vi.push_back(su);
        }
    }
    cout<<vc[0]<<' '<<vi[0];

}
