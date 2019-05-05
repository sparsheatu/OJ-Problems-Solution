#include<bits/stdc++.h>
#define ll long long
using namespace std;
double pi = 3.1415926535897;
int main()
{
    int tc;
    cin>>tc;
    ll a,b,c1,c2;
    for(int i=1;i<=tc;i++)
    {
        scanf("%lld %lld",&a,&b);
        c1=b/3*2;
        if(b%3==2)c1++;
        c2=(a-1)/3*2;
        if((a-1)%3==2)c2++;
        printf("Case %d: %lld\n",i,c1-c2);
     }
    return 0;
}