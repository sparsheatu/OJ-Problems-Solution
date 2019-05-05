#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int o1,o2,a1,a2,b1,b2;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d%d",&o1,&o2,&a1,&a2,&b1,&b2);
        double a=sqrt((o1-a1)*(o1-a1)+(o2-a2)*(o2-a2)),b=a,c=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
        double A=acos((a*a+b*b-c*c)/(2*a*b));
        double ans= A*a;
        printf("Case %d: %.10lf\n",i,ans);
    }
    return 0;
}
 
