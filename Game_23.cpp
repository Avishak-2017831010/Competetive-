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
		
		ll int n,m;
		cin>>n>>m;
		if(m%n)
		{
			cout<<"-1"<<endl;
		}

		else
		{
			int cnt=0,f=0;
			while(n!=m)
			{
				int temp=(m/n);
				if(temp%2==0)
				{
					n*=2;
					cnt++;
				}

				else if(temp%3==0)
				{
					n*=3;
					cnt++;
				}

				else{
					f=1;
					cout<<"-1"<<endl;
					break;
				}
			}

				if(!f)cout<<cnt<<endl;
		}
		return 0;
	}