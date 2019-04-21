#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    for(int k=0;k<v.size()-1;k++){
        for(int s=k+1;s<v.size();s++){
            if(v[k]==v[s]){
                v[s]++;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;



    }

