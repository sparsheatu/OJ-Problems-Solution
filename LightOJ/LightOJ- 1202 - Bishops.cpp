#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    ll r1,c1,r2,c2;
    for(int i=1;i<=tc;i++)
    {
        int flag=0;
        scanf("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
        if((r1&1)==(c1&1)&&(r2&1)==(c2&1)||(r1&1)!=(c1&1)&&(r2&1)!=(c2&1))
            if(abs(r1-r2)==abs(c1-c2))flag=1;
            else flag=2;
        if(flag)
            printf("Case %d: %d\n",i,flag);
        else printf("Case %d: impossible\n",i);
     }
    return 0;
}
 