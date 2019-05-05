/*
Problrm Link: http://lightoj.com/volume_showproblem.php?problem=1011
Concept Needed: Bitwise operations, Bitmask DP.
Concept Link: Google it. There is plenty of tutorial available.
              
Learn Bitmask DP then hopefully you will be able to understand the code.
Happy coding.
*/
#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int priority[17][17],dp[17][(1<<17)+1];
int calculate(int n, int row, int flag)
{
    if(row>=n)return 0;
    if(dp[row][flag]!=-1)return dp[row][flag];
 
    for(int i=0;i<n;i++)
        if(((1<<i)&flag)==0)
            dp[row][flag]=max(dp[row][flag],priority[row][i]+calculate(n,row+1,flag|(1<<i)));
    return dp[row][flag];
}
int main()
{
    int tc;cin>>tc;
    memset(dp,-1,sizeof(dp));
    for(int t=1;t<=tc;t++)
    {
        int n;cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>priority[i][j];
        cout<<"Case "<<t<<": "<<calculate(n,0,1>>17)<<endl;
        memset(dp,-1,sizeof(dp));
    }
    return 0;
}