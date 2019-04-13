#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,i,check=0,fin=-1;
    cin>>n;
    vector<int>v;

    // v.push_back(0);
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    // v.push_back(-1);

    for(int i=0; i<v.size(); i++)
    {
        //sort(v.begin(),v.begin()+i-1);
        if(v[i]>=0 && v[i]<=check)
        {
            if(v[i]==check)
                check++;
        }

        else
        {
            fin=i;
            break;
        }

    }


    if(fin==-1) cout<<fin<<endl;
    else cout<<fin+1<<endl;


}
