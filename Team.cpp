#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n0,n1;
    cin>>n0>>n1;
    int kom=min(n0,n1);
    int beshi=max(n0,n1);

    //memset(arr,2,sizeof(arr));

    int mut=n0+n1;

    vector<int>v;

    int Yes=0;

    if(kom==n0)
    {
        if((kom+1)*2>=beshi)
        {
            if(n1-n0==1)
            {
                for(int i=0;i<(mut/2);i++)
                {
                    v.push_back(10);
                }

                for(int k=0;k<(mut-(2*n0));k++)
                {
                    v.push_back(1);
                }

                for(int sz=0;sz<v.size();sz++)
                {
                    cout<<v[sz];
                }
            }
            else{
            if(mut%3==0)
            {
                for(int i=0; i<(mut/3); i++)
                {
                    v.push_back(110);
                }
            }
            else if(mut%3==1)
            {
                for(int i=0; i<(mut/3); i++)
                {
                    v.push_back(110);
                }
                v.push_back(1);
            }
            else
            {
                for(int i=0; i<(mut/3); i++)
                {
                    v.push_back(110);
                }
                v.push_back(11);
            }

            for(int sz=0;sz<v.size();sz++)
            {
                cout<<v[sz];
            }
        }
        }
        else
        {
            cout<<"-1"<<endl;
        }
        }

    else
    {
        cout<<"-1";
    }


}
