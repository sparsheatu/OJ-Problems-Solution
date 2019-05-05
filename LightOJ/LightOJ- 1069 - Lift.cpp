#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int m,n,ans;
        scanf("%d %d",&m,&n);
        ans=(abs(m-n)+m)*4+10+9;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
