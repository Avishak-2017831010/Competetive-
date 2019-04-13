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
	std::map<char, int> map;
	map['a']=map['e']=map['i']=map['o']=map['u']=1;

	//cout<<map[b];

	string s,t;

	int flag=0;

	cin>>s>>t;
	if(s.size()==t.size()){

	for (int i = 0; i < s.size(); ++i)
	{
		/* code */
		if(map[s[i]] != map[t[i]])
		{
			flag=1;
			break;
		}
	}


	if(flag) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	return 0;
	}

	else
	{
		cout<<"No"<<endl;
	}
}
