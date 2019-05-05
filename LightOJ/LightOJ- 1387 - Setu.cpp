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
        int n;cin>>n;
        ll sum=0;
        printf("Case %d:\n",i);
        string s;
        for(int j=1;j<=n;j++)
        {
            cin>>s;
            if(s[0]=='d')
            {
                int t;cin>>t;
                sum+=t;
            }
            else
                cout<<sum<<endl;
        }
    }
    return 0;
}
 