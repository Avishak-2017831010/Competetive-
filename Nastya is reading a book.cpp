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
		
		std::map<int,int> mp;

		int n;
		cin>>n;

		for(int i=0;i<n;i++)
		{
			int p,q;

			cin>>p>>q;

			for(int j=p;j<=q;j++){

				mp[j]=i;

				//cout<<j<<' '<<i<<endl;
			}
		}

		int t;
		cin>>t;
		cout<<n-mp[t]<<endl;
		return 0;
	}