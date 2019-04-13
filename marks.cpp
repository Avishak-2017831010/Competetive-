#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	int arr[105][105];
	cin >> n >> m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			scanf("%1d",&arr[i][j]);
		}
	}
	
	int cnt[106];
	for(int j=0;j<m;j++)
	{
		int boro=0;
		for(int i=0;i<n;i++)
		{
			boro=max(arr[i][j],boro);
		}

		for(int i=0;i<n;i++)
		{
			if(arr[i][j]==boro)
			{
				cnt[i]=1;
			}
		}
	}

	int sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=cnt[i];
	}

	cout<<sum<<endl;
}