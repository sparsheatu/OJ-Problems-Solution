#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int a,b;cin>>a;
        b=a;
        int p1=0,p0=0;
        while(b%2==0){b/=2;p0++;}
        p1=p0;
        while(b%2){p1++;b/=2;}
        a&=~(1<<p1-1);
        a|=1<<p1;
        for(int j=p1-2,k=0;j>k;)
        {
            if((a&(1<<j)) && !(a&(1<<k)))
            {
                a&=~(1<<j);
                a|=1<<k;
                j--,k++;
            }
            else if(a&1<<j)k++;
            else j--;
        }
        printf("Case %d: %d\n",i,a);
    }
 
    return 0;
}
 