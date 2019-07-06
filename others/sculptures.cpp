#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,cont=0;
	cin>>n;
	int m;
	int sum=0;
	vector<int>v;
	vector<int>v1;
	vector<int>v2;
	for(int j=0;j<n;j++){
        cin>>x;
        v.push_back(x);
	}
	if(n<=4){
        for(int l=0;l<v.size();l++){
            sum+=v[l];
        }
        cout<<sum;
	}
	else{
    for(int i=1;i<=n;i++){
        if(n%i==0){
            v1.push_back(i);
        }
    }
    for(int z=0;z<v1.size();z++){
    for(int y=0;y<v1[z];y++){
    for(int k=y;k<v.size();k+=v1[z]){
            sum+=v[k];
            cont++;
    }
    //cout<<cont<<' ';

    if(cont>=3){
             //cout<<cont<<' ';
    v2.push_back(sum);
    }
    cont=0;
    sum=0;


}
//
}
sort(v2.begin(),v2.end());
cout<<v2[v2.size()-1];
}
}
