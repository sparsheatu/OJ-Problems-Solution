#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int d1,d2,d3,d4;
        int b1,b2,b3,b4;
        scanf("%d.%d.%d.%d",&d1,&d2,&d3,&d4);
        scanf("%d.%d.%d.%d",&b1,&b2,&b3,&b4);
        while(d1&&b1&&d1%2==b1%10)
            d1/=2,b1/=10;
        while(d2&&b2&&d2%2==b2%10)
            d2/=2,b2/=10;
        while(d3&&b3&&d3%2==b3%10)
            d3/=2,b3/=10;
        while(d4&&b4&&d4%2==b4%10)
            d4/=2,b4/=10;
        if(d1==b1&&d1==0&&d2==b2&&d2==0&&d3==b3&&d3==0&&d4==b4&&d4==0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
 