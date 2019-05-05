/*
	Concpt Needed: Segment Tree.
*/

#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
 
#define mx 100001
int arr[mx];
int tree[mx*3];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
 
    int left=node*2, right=node*2+1, mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b) return mx;
    if(b>=i&&e<=j) return tree[node];
 
    int left=node*2, right=node*2+1, mid=(b+e)/2;
    int p1= query(left,b,mid,i,j);
    int p2= query(right,mid+1,e,i,j);
    return min(p1,p2);
}
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<b) return;
    if(b>=i&&e<=i)
    {
        tree[node]=newvalue;
        return;
    }
 
    int left=node*2, right=node*2+1, mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        int n,q;
        scanf("%d%d",&n,&q);
        for(int i=1;i<=n;i++)scanf("%d",arr+i);//cin>>arr[i];
        init(1,1,n);
        for(int j=1;j<=q;j++)
        {
            int s,e;
            scanf("%d%d",&s,&e);
            printf("%d\n",query(1,1,n,s,e));
        }
    }
    return 0;
}
 