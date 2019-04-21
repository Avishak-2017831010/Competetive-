#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    vector<string>v;
    int x=0;
    while(1)
    {
        string s;
        cin>>s;

        bool flag=0;
        for(int i=0;i<s.size();i++){
            if((s[i]>'A'&&s[i]<'Z') ||(s[i]>'a'&&s[i]<'z')){
                flag=1;
                break;
            }
        }
        if(s!="E-N-D")
        {
            if(flag){
                v.push_back(s);
                if(x<s.size())
                    x=s.size();
            }
        }
        else
        {
            break;
        }

    }
    int j=0;
    while(v[j]!="E-N-D")
    {
        if(v[j].size()==x)
        {
            for(int k=0;k<v[j].size();k++){
                printf("%c",tolower(v[j][k]));
            }
            printf("\n");
            break;
        }
        else
        {
            j++;
        }
    }
}
