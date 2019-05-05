#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    double r1,r2,r,h,p,l,ans;
    for(int i=1;i<=tc;i++)
    {
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        r=r1-(r1-r2)*(h-p)/h;
        l=p*r2/(r-r2);
        ans=pi*(r*r*(p+l)-r2*r2*l)/3;
        printf("Case %d: %.10lf\n",i,ans);
     }
    return 0;
}
 