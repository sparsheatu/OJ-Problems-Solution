#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n;cin>>n;
        string s,a,b;
        int x,y,z;
        int mn=1000005,mx=00;
        for(int j=1;j<=n;j++)
        {
            cin>>s>>x>>y>>z;
            int v=x*y*z;
            if(v<mn)mn=v,a=s;
            if(v>mx)mx=v,b=s;
        }
        cout<<"Case "<<i<<": ";
        if(mn==mx)
            cout<<"no thief"<<endl;
        else  cout<<b<<" took chocolate from "<<a<<endl;
    }
    return 0;
}