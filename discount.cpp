#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,arr[1000000],sum=0;
	vector<long long int>v;
	scanf("%lld",&n);
	for(long long int i=0;i<n;i++)
	{
		long long int val;
		cin>>val;
		v.push_back(val);
		sum+=val;

	}


	sort(v.rbegin(),v.rend());

	long long int c;
	cin>>c;

	for(long long int i=0;i<c;i++)
	{
		long long int k;
		cin>>k;

		cout<<sum-v[k-1]<<endl;
	}

}