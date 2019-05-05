#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    double r1,r2,r3;
    for(int i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        double a=r1+r2,b=r2+r3,c=r3+r1;
        double R=(a+b+c)/2.0;
        double A=acos((a*a+c*c-b*b)/(2*c*a)),B=acos((a*a+b*b-c*c)/(2*a*b)),C=acos((b*b+c*c-a*a)/(2*b*c));
        double ans= sqrt(R*(R-a)*(R-b)*(R-c))-.5*A*r1*r1-.5*B*r2*r2-.5*C*r3*r3;
        printf("Case %d: %.10lf\n",i,ans);
    }
    return 0;
}
 