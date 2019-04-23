#include<bits/stdc++.h>
using namespace std;
int main()
{
    double vp,vd,l,w,d;
    cin>>vp>>vd>>l>>w>>d;
    if(vp>=vd)
    {
        cout<<"0"<<endl;
    }
    else{

        double pos=l*vp;
        int cnt=0;
        while(1)
        {
            pos+=pos/(vd-vp)*vp;
            if(pos>=d)
            {
                break;
            }
            cnt++;
            pos+=(pos/vd+w)*vp;

        }

        cout<<cnt<<endl;
    }
}
