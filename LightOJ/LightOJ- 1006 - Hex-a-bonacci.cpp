#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a, b, c, d, e, f;
ll dp[10005];
ll fn( int n ) {
    if( n == 0 ) return a%10000007;
    else if( n == 1 ) return b%10000007;
    else if( n == 2 ) return c%10000007;
    else if( n == 3 ) return d%10000007;
    else if( n == 4 ) return e%10000007;
    else if( n == 5 ) return f%10000007;
    if(dp[n]==-1)dp[n]=fn(n-1)+ fn(n-2) + fn(n-3)+ fn(n-4)+ fn(n-5)+ fn(n-6);
    return dp[n]%10000007;
}
int main()
{
//    freopen( "output.txt","w",stdout);
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        memset(dp,-1,sizeof dp);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n));
    }
    return 0;
}
 