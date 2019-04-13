#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main(int argc, char const *argv[])
{
	
	std::map<int,int> map;
	std::vector<int> v;

	int n;
	cin>>n;
	int arr[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
			v.push_back(i+1);

	}

	int mx=0;

	for(int j=0;j<v.size()-1;j++)
	{
		mx=max(v[j+1]-v[j]-1,mx);
	}

	int k=n-v[v.size()-1]+v[0]-1;

	//cout<<k<<endl;

	mx=max(mx,k);

	cout<<mx<<endl;
	return 0;
}
