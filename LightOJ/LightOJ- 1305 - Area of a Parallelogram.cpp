#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a1,a2,b1,b2,c1,c2,d1,d2;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
        d1=c1-b1+a1;
        d2=c2-b2+a2;
        int ans=(a1*b2+b1*c2+c1*d2+d1*a2-a2*b1-b2*c1-c2*d1-d2*a1)/2;
        if(ans<0)ans*=-1;
        printf("Case %d: %d %d %d\n",i,d1,d2,ans);
    }
    return 0;
}

