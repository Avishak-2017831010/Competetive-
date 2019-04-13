#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()

{
        vector<int>v;
        map<string,int>mp;
        vector<string>vs;
        vector<char>vc;

        string s,s1,s2,s3,s4,s5,s6,news,temp;

        int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0;

        s1="RGB"; vs.push_back(s1);
        s2="RBG"; vs.push_back(s2);
        s3="BGR"; vs.push_back(s3);
        s4="BRG"; vs.push_back(s4);
        s5="GRB"; vs.push_back(s5);
        s6="GBR"; vs.push_back(s6);

        int n,cnt=0,cntt=0;
        cin>>n;
        cin>>s;

        temp=s;

       for(int i=0;i<n;i++)
       {
           if(s[i]!=s1[i%3])
           {
               cnt1++;
           }
       }

       v.push_back(cnt1);


        for(int i=0;i<n;i++)
       {
           if(s[i]!=s2[i%3])
           {
               cnt2++;
           }
       }

        v.push_back(cnt2);

        for(int i=0;i<n;i++)
       {
           if(s[i]!=s3[i%3])
           {
               cnt3++;
           }
       }

        v.push_back(cnt3);


        for(int i=0;i<n;i++)
       {
           if(s[i]!=s4[i%3])
           {
               cnt4++;
           }
       }

        v.push_back(cnt4);





        for(int i=0;i<n;i++)
       {
           if(s[i]!=s5[i%3])
           {
               cnt5++;
           }
       }

         v.push_back(cnt5);


        for(int i=0;i<n;i++)
       {
           if(s[i]!=s6[i%3])
           {
               cnt6++;
           }
       }

        v.push_back(cnt6);

       sort(v.begin(),v.end());

       cout<<v[0]<<endl;

        cnt1=cnt2=cnt3=cnt4=cnt5=cnt6=0;

        for(int i=0;i<n;i++)
        {
            if(s1[i%3]!=s[i])
            {
                cnt1++;
            }
        }

        mp[s1]=cnt1;

         for(int i=0;i<n;i++)
        {
            if(s2[i%3]!=s[i])
            {
                cnt2++;
            }
        }

        mp[s2]=cnt2;


         for(int i=0;i<n;i++)
        {
            if(s3[i%3]!=s[i])
            {
                cnt3++;
            }
        }

        mp[s3]=cnt3;


         for(int i=0;i<n;i++)
        {
            if(s4[i%3]!=s[i])
            {
                cnt4++;
            }
        }

        mp[s4]=cnt4;


         for(int i=0;i<n;i++)
        {
            if(s5[i%3]!=s[i])
            {
                cnt5++;
            }
        }

        mp[s5]=cnt5;


         for(int i=0;i<n;i++)
        {
            if(s6[i%3]!=s[i])
            {
                cnt6++;
            }
        }

        mp[s6]=cnt6;


        if(mp[s1]==v[0])
        {
            for(int i=0;i<n;i++){
                cout<<s1[i%3];
        }

            return 0;
        }


        if(mp[s2]==v[0])
        {
            for(int i=0;i<n;i++){
                cout<<s2[i%3];
        }

            return 0;
        }

        if(mp[s3]==v[0])
        {
            for(int i=0;i<n;i++){
                cout<<s3[i%3];
        }
            return 0;
        }

        if(mp[s4]==v[0])
        {
            for(int i=0;i<n;i++){
                cout<<s4[i%3];
        }
            return 0;
        }

        if(mp[s5]==v[0])
        {
            for(int i=0;i<n;i++){
                cout<<s5[i%3];
        }

            return 0;
        }

        if(mp[s6]==v[0])
        {
            for(int i=0;i<n;i++){
                cout<<s6[i%3];
        }

            return 0;
        }

}

