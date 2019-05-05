#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int m,n,ans=0;
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&m);
            if(m>0)ans+=m;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
 