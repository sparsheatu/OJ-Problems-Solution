#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n;
        int ans=0,tp=2;
        cin>>n;
        while(n--)
        {
            int a;cin>>a;
            if(a!=2)
                ans+=(a-tp+4)/5;
            tp=a;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
 