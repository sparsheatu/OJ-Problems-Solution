#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc; cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n,m,k; cin>>n>>m>>k;
        int stat[35][35];
        for(int j= 1;j<=n;j++)
        {
            for(int l=1;l<=k;l++)
                cin>>stat[j][l];
        }
        int t,a;cin>>t;
        bool present[35]={0};
        for(int j= 1;j<=t;j++)
        {
            cin>>a;
            present[a]=1;
        }
        int flag=0;
        for(int j=1;j<=n;j++)
        {
            flag=0;
            for(int l=1;l<=k;l++)
            {
                int pos=stat[j][l];
                if( pos>0)
                {
                    if(present[pos])
                    {
                        flag=1;
                        break;
                    }
                }
                else if(!present[-pos])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)break;
        }
        cout<<"Case "<<i<<": ";
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
