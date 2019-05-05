#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n,p,q;
        cin>>n>>p>>q;
        int cnt=0,wt=0;
        while(n--)
        {
            int a;cin>>a;
            if(wt+a<=q&&cnt<p)
                wt+=a,cnt++;
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
    return 0;
}
 
