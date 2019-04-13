#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
	int f=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0){
			f=1;
			break;
		}

	}

	if(f) return 0;
	else return 1;

}
int main()
{
	int n;
	cin>>n;

	int arr[100005]={0};

	std::vector<int> v;

	if(n>2)cout<<"2"<<endl;
	else cout<<"1"<<endl;

	for(int i=2;i<=n+1;i++)
	{
		if(prime(i))
		{
			cout<<"1"<<' ';
		}

		else
			cout<<"2"<<' ';
	}


}