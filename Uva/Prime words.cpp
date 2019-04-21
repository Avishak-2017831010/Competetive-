#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int flag=0;
    if(n<2) {return 0;}
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag) return 0;
        else return 1;
    }
}

int main()
{
    string s;
    while(getline(cin,s))
    {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                sum+=s[i]-38;
            }
            else{
                sum+=s[i]-96;
            }
        }
        if(prime(sum)) cout<<"It is a prime word"<<endl;
        else cout<<"It is not a prime word"<<endl;
        s.clear();
    }
}
