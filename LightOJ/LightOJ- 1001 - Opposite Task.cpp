#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[150],x,y;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
            if(a[i]<=10)cout<<0<<" "<<a[i]<<endl;
            else{x=abs(a[i]-10);y=a[i]-x;cout<<x<<" "<<y<<endl;}}
    return 0;
}
 