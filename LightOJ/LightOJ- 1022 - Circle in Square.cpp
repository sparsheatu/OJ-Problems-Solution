#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
       double a,ans;cin >>a;
       ans=(4*a*a)-(3.14159265358979*a*a);
       printf("Case %d: %.2f\n",i,ans);
    }
    return 0 ;
}