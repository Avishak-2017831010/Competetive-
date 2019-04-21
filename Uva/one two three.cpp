#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1="one",s2="two",s3="three";
    while(t--)
    {
        int cnt1=0,cnt2=0;
        string s;
        cin>>s;
        if(s.size()==3)
        {
            for(int i=0;i<3;i++)
            {
                if(s[i]!=s1[i]){
                    cnt1++;
                }
                if(s[i]!=s2[i])
                {
                    cnt2++;
                }

            }

            if(cnt1==1 || s=="one"){
                    cout<<"1"<<endl;
                    cnt1=0;
                    //break;
            }

             if(cnt2==1 || s=="two"){
                    cout<<"2"<<endl;
                    cnt2=0;
                    //break;
            }
        }
        else{
            cout<<"3"<<endl;
           // cnt3=0;
        }
    }
}
