#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        ll m,n,o;
        scanf("%lld %lld %lld",&n,&m,&o);
        if(n*n+m*m==o*o||n*n==m*m+o*o||n*n+o*o==m*m)
            printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}
 