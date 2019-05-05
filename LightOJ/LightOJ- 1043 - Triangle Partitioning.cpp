#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        double m,l,u,a,b,c,d,o,s,s1,s2;
        cin>>a>>b>>c>>d;
        l=0.00;u=a;
        o=(a+b+c)/2;
        s=sqrt(o*(o-a)*(o-b)*(o-c));
        while(u-l>.0000000001)
        {
            m=(u+l)/2;
            o=(m+m*b/a+m*c/a)/2.00;
            s1=sqrt(o*(o-m)*(o-m*b/a)*(o-m*c/a));
            s2=s-s1;
            (s1/s2<d)?l=m:u=m;
        }
        cout<<"Case "<<i<<": "<<setprecision(10)<<u<<endl;
    }
    return 0;
}