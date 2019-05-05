#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ar[202][202],dp[202][202];
int tc,t=1,n;
int maxi(int i,int j)
{
    int v1,v2;
    if(ar[i][j]==-1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(i<n)
    {
        v1=ar[i][j]+maxi(i+1,j);
        v2=ar[i][j]+maxi(i+1,j+1);
    }
    else
    {
        v1=ar[i][j]+maxi(i+1,j-1);
        v2=ar[i][j]+maxi(i+1,j);
    }
    return dp[i][j]=max(v1,v2);
}
int main()
{
    cin>>tc;
    while(tc--)
    {
        memset(ar,-1,sizeof ar);
        memset(dp,-1,sizeof dp);
        scanf( "%d",&n);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=i;j++)scanf( "%d",&ar[i][j]);
        for(int i=n+1,c=n-1;i<=2*n-1;i++,c--)
            for(int j=1;j<=c;j++)scanf( "%d",&ar[i][j]);
        printf( "Case %d: %d\n",t++,maxi(1,1));
    }
 
    return 0;
}
 