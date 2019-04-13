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
		int n,flag=0;
		cin>>n;
		int arr[n+5];
		int re[n+5];
		std::map<int,int> mp;

		for(int i=0;i<n-1;i++)
		{
			cin>>arr[i];
		}

		if(arr[0]<0) {
			re[0]=n;
		}

		else {
			re[0]=1;
		}
		mp[re[0]]=1;

		for(int k=0;k<n-1;k++)
		{
			re[k+1]=re[k]+arr[k];
			mp[re[k+1]]++;
			if(re[k+1]>n || mp[re[k+1]]>1 || re[k+1]<=0 )
			{
				flag=1;
				break;
			}
		}

		if(flag)
		{
			cout<<"-1"<<endl;
		}

		else
			{
				for(int i=0;i<n;i++)
				{
					cout<<re[i]<<' ';
				}
			}
		return 0;
	}