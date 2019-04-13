#include<bits/stdc++.h>
using namespace std;
vector<int>v[100009];

//vector<int>v;

vector<int>visit(100009,0);


priority_queue<int,vector<int>,greater<int>>q;

int Bfs(int n)
{
    q.push(n);
    visit[n]=1;
    while(!q.empty())
    {
        int first=q.top();
        cout<<first<<' ';
        q.pop();
        //v.push_back(first);

        //first size

        int first_size=v[first].size();

        for(int i=0; i<first_size; i++)
        {
            int temp=v[first][i];
            if(visit[temp]==1)
                continue;
            visit[temp]=1;
            q.push(temp);
        }
    }
}


int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=0; i<b; i++)
    {
        int p,q;
        cin>>p>>q;
        v[p].push_back(q);
        v[q].push_back(p);
    }


    Bfs(1);

}
