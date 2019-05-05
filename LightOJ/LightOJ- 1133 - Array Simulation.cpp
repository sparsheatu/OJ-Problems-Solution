#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n,m,arr[105]={0};cin>>n>>m;
        for(int j=0;j<n;j++)cin>>arr[j];
        for(int j=1;j<=m;j++)
        {
            char c;cin>>c;
            if(c=='S')
            {
                int a;cin>>a;
                for(int k=0;k<n;k++)arr[k]+=a;
            }
            else if(c=='M')
            {
                int a;cin>>a;
                for(int k=0;k<n;k++)arr[k]*=a;
            }
            else if(c=='D')
            {
                int a;cin>>a;
                for(int k=0;k<n;k++)arr[k]/=a;
            }
            else if(c=='R')
            {
                reverse(arr,arr+n);
            }
            else
            {
                int a,s;cin>>a>>s;
                swap(arr[a],arr[s]);
            }
        }
        cout<<"Case "<<i<<":\n";
        for(int j=0;j<n-1;j++)cout<<arr[j]<<" ";
        cout<<arr[n-1]<<endl;
    }
    return 0;
}
