#include<bits/stdc++.h>
using namespace std;
 
int coin[61],num[61],dp[51][21][1001];
int tc,t=1,n,k;
 
int way(int amount ,int i,int c)
{
    if(i==n+1)
    {
        if(amount == 0)return 1;
        else  return 0;
    }
 
    if(dp[i][c][amount]!=-1)
    {
        return dp[i][c][amount];
    }
 
    int v1,v2;
    if(amount-coin[i]>=0 && c<=num[i]) v1 = way(amount-coin[i],i,c+1);
    else v1=0;
    v2=way(amount,i+1,1);
    return dp[i][c][amount] =(v1+v2)%100000007;
}
 
int main()
{
    cin>>tc;
 
    while(tc--)
    {
        memset(dp,-1,sizeof dp);
        scanf("%d %d",&n,&k);
        for(int i=1;i<=n;i++)scanf("%d",coin+i);
        for(int i=1;i<=n;i++)scanf("%d",num+i);
 
        cout<<"Case "<<t++<<": "<<way(k,1,1)<<endl;
    }
    return 0;
}
 
