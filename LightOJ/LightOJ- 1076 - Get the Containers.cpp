#include <bits/stdc++.h>
using namespace std;
int n,k,t;
int ar[1005];
bool bisect(int md)
{
    int count=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=ar[i];
        if(sum>md)count++,sum=ar[i];
    }
    count ++;
    return count<=k;
}
int main()
{
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int mn=0,mx=0;
        scanf("%d%d",&n,&k);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&ar[i]);
            mx+=ar[i], mn=max(mn,ar[i]);
        }
        int md,exp=mx;
        while (mx>=mn)
        {
            md=(mx+mn)/2;
            if(bisect(md))
            {
                exp=md;
                mx=md-1;
            }
            else
                mn=md+1;
        }
        cout<<"Case "<<j<<": "<<exp<<endl;
    }
    return 0;
}