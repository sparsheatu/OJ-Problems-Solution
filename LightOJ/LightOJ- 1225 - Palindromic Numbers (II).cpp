#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    ll n,ans,tp;
    for(int i=1;i<=tc;i++)
    {
        scanf("%lld",&n);
        tp=n;
        ans=n%10;n/=10;
        while(n)ans=ans*10+n%10,n/=10;
        if(tp==ans)
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
     }
    return 0;
}
 