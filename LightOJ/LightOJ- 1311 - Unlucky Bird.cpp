#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    double a1,a2,a3,c1,c2;
    for(int i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf%lf%lf",&a1,&a2,&a3,&c1,&c2);
        printf("Case %d: %.10lf %.10lf\n",i,(a1*a1*.5/c1)+(a2*a2*.5/c2),a3*max(a1/c1,a2/c2));
    }
    return 0;
}
 