#include <bits/stdc++.h>
#define ll long long
#define fri(i,a,b) for(int i=a;i<=b;i++)
#define frd(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
 
bool compare( pair<int,int>a, pair<int,int>b)
{
    if(a.first == b.first)return a.second > b.second;
    return a.first < b.first;
}
 
int main()
{
    ll n,t; cin>>t;
    pair<int,int>p[1001];
 
    for(int i=1;i<=1000;i++)p[i].first=0,p[i].second=i;
    for(int i=1;i<=32;i++)
        for(int j=i*i;j<=1000;j+=i)(i*i==j)?p[j].first++:p[j].first+=2;
    p[0].first=0,p[0].second=0;
    sort(p,p+1001,compare);
    fri(i,1,t)
    {
        int val;cin>>val;
        cout<<"Case "<<i<<": "<<p[val].second<<endl;
    }
    return 0;
}
 