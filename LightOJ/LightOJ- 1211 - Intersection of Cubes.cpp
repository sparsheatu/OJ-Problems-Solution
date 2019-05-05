#include <bits/stdc++.h>
#define ll long long
#define fri(i,a,b) for(int i=a;i<=b;i++)
#define frd(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
 
int main()
{
    ll n,t; cin>>t;
    fri(i,1,t)
    {
        int x1,x2,y1,y2,z1,z2;
        int mxx1=0,mnx2=1001,mxy1=0,mny2=1001,mxz1=0,mnz2=1001;
 
        cin>>n;
        fri(j,1,n)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            mxx1=max(mxx1,x1),mnx2=min(mnx2,x2),mxy1=max(mxy1,y1),mny2=min(mny2,y2),mxz1=max(mxz1,z1),mnz2=min(mnz2,z2);
        }
        cout<<"Case "<<i<<": ";
        if(mxx1<mnx2 && mxy1<mny2 && mxz1<mnz2) cout<<(mnx2-mxx1)*(mny2-mxy1)*(mnz2-mxz1)<<endl;
        else cout<<0<<endl;
 
    }
    return 0;
}
 