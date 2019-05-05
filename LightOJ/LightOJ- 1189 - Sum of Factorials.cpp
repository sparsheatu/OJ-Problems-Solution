#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
ll fact[21];
void factorial()
{
    fact[0]=1;
    for(int i=1;i<=20;i++)fact[i]=fact[i-1]*i;
}
int main()
{
    factorial();
    int tc; cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int arr[21];
        ll n,cnt=0;cin>>n;
        for(int j=20;j>=0&&n>0;j--)
        {
            if(fact[j]<=n)
            {
                arr[++cnt]=j;
                n-=fact[j];
            }
        }
        cout<<"Case "<<i<<": ";
        if(n)cout<<"impossible"<<endl;
        else
        {
            cout<<arr[cnt--]<<"!";
            while(cnt)
            {
                cout<<"+"<<arr[cnt--]<<"!";
            }
            cout<<endl;
        }
    }
    return 0;
}
 