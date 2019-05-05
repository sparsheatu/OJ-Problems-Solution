#include<bits/stdc++.h>
#define ll long long
using namespace std;
double pi = 3.1415926535897;
int main()
{
    int tc;
    cin>>tc;
    ll n,tp;
    for(int i=1;i<=tc;i++)
    {
        scanf("%lld",&n);
        tp=n;
        if(n&1)
            printf("Case %d: Impossible\n",i);
        else
        {
            while((n&1)==0)n=n>>1;
            printf("Case %d: %lld %lld\n",i,n,tp/n);
        }
     }
    return 0;
}
