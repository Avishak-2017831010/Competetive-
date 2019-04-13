#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v1;
vector<int>v2;
int n,cnt=0,boro,boro1,chuto,chuto1;
cin>>n;
for(int i=0;i<n;i++)
{
    int f,l;
    cin>>f>>l;
    v1.push_back(f);
    v2.push_back(l);
}
boro=max(v1[0],v2[0]);
chuto=min(v1[0],v2[0]);
for(int i=1;i<v1.size();i++)
{
    boro1=max(v1[i],v2[i]);
    chuto1=min(v1[i],v2[i]);
    if(boro1<=boro){
        boro=boro1;
        cnt++;
    }
    else if(chuto1<=boro)
    {
        boro=chuto1;
        cnt++;
    }
    }
    if(cnt==n-1)
    {
        cout<<"YES"<<endl;
    }
    else{
            cout<<"NO"<<endl;
        }
}


