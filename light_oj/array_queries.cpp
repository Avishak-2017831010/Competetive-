#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int arr2[100005*4];

void build(int b,int e,int cur)
{
    if(b==e)
    {
         arr2[cur]=arr[b];
         return;
    }

    int left=cur*2;
    int right=(cur*2)+1;
    int mid=(b+e)/2;
    build(b,mid,left);
    build(mid+1,e,right);

    arr2[cur]=min(arr2[left],arr2[right]);
}

int query(int b,int e,int i,int j,int cur)
{
    if(b>j || e<i)
    {
        return INT_MAX;
    }

    if(b>=i && e<=j)
    {
        return arr2[cur];
    }

    int left=cur*2;
    int right=(cur*2)+1;
    int mid=(b+e)/2;

    int x=query(b,mid,i,j,left);
    int y=query(mid+1,e,i,j,right);

    return min(x,y);


}

int main()
{
    int t,i,j,s,e,sz,q;
    int n,bam,dan,fin;
    scanf("%d",&n);

    for(int k=1;k<=n;k++)
    {
        //cin>>sz>>q;
        scanf("%d%d",&sz,&q);
        for(int i=1;i<=sz;i++)
        {
            //cin>>arr[i];
            scanf("%d",&arr[i]);
        }

        build(1,sz,1);

        //cout<<"Case "<<k<<':'<<endl;
        printf("Case %d:\n",k);

        for(int l=1;l<=q;l++)
        {
            //cin>>bam>>dan;
            scanf("%d%d",&bam,&dan);
            fin=query(1,sz,bam,dan,1);
            //cout<<fin<<endl;
            printf("%d\n",fin);
        }
    }
}
