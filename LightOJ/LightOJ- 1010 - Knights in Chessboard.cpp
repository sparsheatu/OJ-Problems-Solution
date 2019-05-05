#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int m,n,ans;
        scanf("%d %d",&m,&n);
        if(m==1||n==1||n*m<=4)ans=m*n;
        else if(n==2||m==2)ans=(n*m/8)*4+((n*m%8<5)?n*m%8:4);
        else ans=(n*m+1)/2;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
 