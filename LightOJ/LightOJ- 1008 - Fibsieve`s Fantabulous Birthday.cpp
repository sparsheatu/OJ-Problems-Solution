#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    ll clm,rw,s;
    for(int i=1;i<=t;i++)
    {
        cin>>s;
        ll pos=ceil(sqrt(s));
        ll tp=pos*pos;
        if(tp&1)
        {
            clm=tp-s+1, rw=pos;
            if(clm>pos)clm=pos, rw=s-(pos-1)*(pos-1);
        }
        else
        {
            clm=s-(pos-1)*(pos-1), rw=pos;
            if(clm>pos)clm=pos, rw=tp-s+1;
        }
        cout<<"Case "<<i<<": "<<clm<< " "<<rw<<endl;
    }
    return 0;
}
 