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
	/* code */

	std::vector<int> v;

	int n,k;


	cin>>n>>k;

	for (int i = 0; i < n; ++i)
	{
		/* code */

		int x;
		cin>>x;
		v.push_back(x);

	}
	sort(v.begin(), v.end());

	if(k==0)
	{
		if(v[0]>1) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}

	else 
	{
		if(v[k-1]!=v[k]){
		cout<<v[k-1]<<endl;
		}

		else
		{
			cout<<"-1"<<endl;
		}
	}

}