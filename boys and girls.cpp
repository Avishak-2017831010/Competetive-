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


		
		freopen("input.txt","rt",stdin);
		freopen("output.txt","wt",stdout);


		int b,g;
		
		vector<char>s;

		cin>>b>>g;

		for(int i=0;i<min(b,g);i++)
		{
			if(b>g){
			s.push_back('B');
			s.push_back('G');
		}

		else{
			s.push_back('G');
			s.push_back('B');
		}

		if(b>g)
		{
			for(int j=0;j<(b-g);j++)
			{
				s.push_back('B');
			}
		}

		if(g>b)
		{
			for(int j=0;j<(g-b);j++)
			{
				s.push_back('G');
			}
		}


		for(int i=0;i<s.size();i++)
		{
			cout<<s[i];
		}
		return 0;
	}
