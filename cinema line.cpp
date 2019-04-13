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
	

	int n,sum=0,cnt=0;
	cin>>n;
	int arr[n+5];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

		if(arr[i]==25)
		{
			sum+=25;
			cnt++;
			//cout<<sum<<endl;
		}

		if(arr[i]==50)
		{
			if(sum>=25)
			{
				sum+=50;
				sum-=25;
				cnt++;
				//cout<<sum<<endl;
			}

			else
			{
				cout<<"NO";

				break;
			}
		}

		if(arr[i]==100)
		{
			if(sum>=75)
			{
				sum+=100;
				sum-=75;
				cnt++;
				//cout<<sum<<endl;
			}

			else{



				cout<<"NO";
				break;
			}
		}

		cout<<sum<<endl;
		//cout<<cnt<<endl;
	}

	if(cnt==n) cout<<"YES";
	else cout<<"NO";


	return 0;
}