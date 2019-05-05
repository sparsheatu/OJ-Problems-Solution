#include<bits/stdc++.h>
#define ll long long
using namespace std;
double pi = 3.1415926535897;
int main()
{
    int tc;
    cin>>tc;
    int x1,x2,y1,y2;
    int x,y,n;
    for(int i=1;i<=tc;i++)
    {
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&n);
        printf("Case %d:\n",i);
        for(int j=1;j<=n;j++)
        {
            scanf("%d %d",&x,&y);
            if(x>x1&&x<x2&&y>y1&&y<y2)
                printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
 