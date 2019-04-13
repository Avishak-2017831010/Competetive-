#include<bits/stdc++.h>
using namespace std;
int n=1100;
int pri[1100];
int dur[1100];
void prime()
{
    for(int i=0;i<n;i++)
    {
        pri[i]=0;
    }
    for(int i=2; i<=sqrt(n); i++)
        if(!pri[i])
        {
            for(int k=2*i; k<=n; k+=i)
                pri[k]=1;
        }
}
void beracera(int source, int weight)
{
    for(int i=0;i<n;i++)
    {
        dur[i]=INT_MAX;
    }
    queue<int>q;
    q.push(source);
    dur[source]=0;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        if(temp==weight)
            return;
        for(int a=2; a<temp; a++)
        {
            if(temp%a==0 && pri[a]==0)
            {
                if(temp+a>weight)
                {
                    break;
                }
                else
                {
                    if(dur[temp+a]>dur[temp]+1)
                    {
                        dur[temp+a]=dur[temp]+1;
                        q.push(temp+a);
                    }
                }
            }
        }
    }


}
int main()
{
    int test,x,y,cnt=0;
    cin>>test;
    prime();
    while(test--)
    {
        cnt++;
        int x,y;
        cin>>x>>y;
        beracera(x,y);
        if(dur[y]!=INT_MAX)
        {
            /*Case 1: 2
                Case 2: -1 */


            printf("Case %d: %d\n",cnt,dur[y]);
        }
        else
        {
            printf("Case %d: -1\n",cnt);
        }

    }
    //cout<<INT_MAX;
}
