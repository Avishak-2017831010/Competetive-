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

#define ll long long

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


	int main(int argc, char const *argv[])
	{
		ll int n,cnt=0;
		cin>>n;
		std::vector<ll int> v;

		for(ll i=1;i<=n;i++)
		{
			ll k;
			cin>>k;
			v.push_back(k);
			//cnt+=abs(i-k);r
		}

		sort(v.begin(), v.end());


		for(ll int i=0;i<n;i++)
		{
			//int k;
			//cin>>k;
			//v.push_back(k);
			cnt+=abs(i+1-v[i]);
		}


		cout<<cnt<<endl;
		return 0;
	}