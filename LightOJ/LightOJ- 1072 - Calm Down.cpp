#include<bits/stdc++.h>
#define ll long long
using namespace std;
double pi = 3.1415926535897;
int main()
{
    int tc;
    cin>>tc;
    double m,n,ans;
    for(int i=1;i<=tc;i++)
    {
        scanf("%lf %lf",&m,&n);
        double tp=sin(pi/n);
        ans=m*tp/(1+tp);
        printf("Case %d: %.10lf\n",i,ans);
    }
    return 0;
}
 