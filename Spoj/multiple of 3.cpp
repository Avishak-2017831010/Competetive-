#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=100000007;
const int MX=2*100005;

struct dt{
    int zero,one,two;
}tree[MX*4];

int lazy[MX * 4];

void make(int node,int b,int e)
{
    if(b==e){
        tree[node].zero=1;
        tree[node].two=0;
        tree[node].one=0;
        return;
    }
    make(node*2,b,(b+e)/2);
    make(node*2+1,1+(b+e)/2,e);
    tree[node].zero=tree[node*2].zero+tree[node*2+1].zero;
}

void node_update(int node)
{
    int a=tree[node].zero,b=tree[node].one,c=tree[node].two;
    tree[node].one=a;
    tree[node].two=b;
    tree[node].zero=c;
    return;
}

void merge_node(int node)
{
    tree[node].zero=tree[node*2].zero+tree[node*2+1].zero;
    tree[node].one=tree[node*2].one+tree[node*2+1].one;
    tree[node].two=tree[node*2].two+tree[node*2+1].two;
}

void update(int node,int b,int e,int l,int r)
{

    if(lazy[node]){
        int up=lazy[node]%3;
        while(up--){
            node_update(node);
        }
        if(b!=e){

            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }

    if(b>r || e<l){
        return;
    }

    if(b>=l && e<=r){
        node_update(node);
        if(b!=e){
            lazy[node*2]+=1;
            lazy[node*2+1]+=1;
        }
        return;
    }
    update(node*2,b,(b+e)/2,l,r);
    update(node*2+1,1+(b+e)/2,e,l,r);
    merge_node(node);
}

int query(int node,int b,int e,int l,int r)
{
    if(b>r || e<l){
        return 0;
    }
    if(lazy[node]){
        int up=lazy[node]%3;
        while(up--){
            node_update(node);
        }
        if(b!=e){

            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }

    if(b>=l && e<=r){
        return tree[node].zero;
    }


    return query(node*2,b,(b+e)/2,l,r)+query(node*2+1,1+(b+e)/2,e,l,r);
}



int main()
{
    int n,q,c,l,r,t;
    int v;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++){
        memset(tree,0,sizeof tree);
        memset(lazy,0,sizeof lazy);
        scanf("%d%d",&n,&q);
        make(1,1,n);
        printf("Case %d:\n",tc);
        for(int i=0;i<q;i++){
            scanf("%d%d%d",&c,&l,&r);
            if(c==0){
                update(1,1,n,l+1,r+1);
            }else{
                printf("%d\n",query(1,1,n,l+1,r+1));
            }
        }
    }


}
