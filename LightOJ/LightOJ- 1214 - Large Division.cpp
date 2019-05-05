#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    for(int tc=1;tc<=T;tc++)
    {
        ll n=0,m;
        char s[205];
        scanf("%s %lld",s,&m);
        int i=0,l=strlen(s);
        if(s[i]=='-')i++;
        while(i<l)
            n=(n*10+s[i++]-48)%m;
        if(n==0)
            printf("Case %d: divisible\n",tc);
        else printf("Case %d: not divisible\n",tc);
     }
    return 0;
}
 