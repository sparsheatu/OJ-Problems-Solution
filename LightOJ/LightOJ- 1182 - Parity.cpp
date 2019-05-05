#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        ll n,cnt=0;
        scanf("%lld",&n);
        while(n)
        {
            if(n&1)cnt++;
            n>>=1;
        }
        printf("Case %d: %s\n",i,cnt&1?"odd":"even");
     }
    return 0;
}
 