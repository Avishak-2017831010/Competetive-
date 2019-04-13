#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0;
	vector<int>v1;
	vector<int>v2;
	
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		v1.push_back(k);
	}

	sort(v1.rbegin(),v1.rend());

	int hg=v1[0];

	for(int i=0;i<v1.size();i++)
		for(int j=0;j<v1.size();j++)
			if(v1[i]+v1[j]==hg)
				cnt++;


	if(cnt>=2)cout<<cnt/2<<endl;
	else cout<<cnt<<endl;
}
