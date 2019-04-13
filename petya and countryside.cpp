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
		int n;
		cin>>n;

		int arr[n+5];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}

		int mx=-1;
		if(n==1)
		{
			mx=1;
		}
		else{

		for(int i=1;i<=n;i++)
		{
			int cnt1=1,cnt2=1;
			int j=i+1;
			while(arr[j]<=arr[j-1] && j<=n)
			{
				cnt1++;
				j++;
			}

			//cout<<cnt1<<' ';

			int k=i-2;
			while(arr[k]<=arr[k+1] && k>=0)
			{
				cnt2++;
				k--;
			}

			//cout<<cnt2<<endl;

			mx=max(mx,cnt1+cnt2);
		}


		}

		cout<<mx<<endl;
	}

		