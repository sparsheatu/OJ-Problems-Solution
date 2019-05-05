#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    map<string, int>mp;
    mp["January"]=1,mp["February"]=2,mp["March"]=3,mp["April"]=4,mp["May"]=5,mp["June"]=6,mp["July"]=7,mp["August"]=8,mp["September"]=9,mp["October"]=10,mp["November"]=11,mp["December"]=12;
    string s;
    ll d,y;
    for(int i=1;i<=tc;i++)
    {
        ll lw,up;
        cin>>s;
        scanf("%lld, %lld",&d,&y);
        lw=y/4-y/100+y/400;
        if((y%4==0&&y%100!=0)|| y%400==0)
            if(mp[s]<mp["March"])lw--;
        cin>>s;
        scanf("%lld,%lld",&d,&y);
        up=y/4-y/100+y/400;
        if(y%4==0&&y%100!=0 || y%400==0)
        {
            if(mp[s]<mp["February"])up--;
            else if(mp[s]==mp["February"]&&d<29)up--;
        }
        printf("Case %d: %lld\n",i,up-lw);
    }
    return 0;
}
 