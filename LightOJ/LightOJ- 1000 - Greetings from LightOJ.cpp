#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[150],b[150];
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    for(int i=0;i<n;i++)cout<<"Case "<<i+1<<": "<<a[i]+b[i]<<endl;
    return 0;
}
 