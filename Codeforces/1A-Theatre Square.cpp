/*
Problem link: http://codeforces.com/problemset/problem/1/A
----------------------------------------------------------
Here the code using a tricky formula : ((a+n-1)/n)*((b+n-1)/n); which may seems like a special formula but it is actually a very elegant 
way of ceiling the value; We just add the value of divider minus one with the divident then divide by the divider.

That mean: x = (a+n-1)/n; work same as: 
            1. x = a/n;if(a%n!=0) x++;
            Or
            2. x = celi(a/n); 
            Or
            3. x = a/n+(a%n==0)?0:1;
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,n,ans;
    cin>>a>>b>>n;
    ans=((a+n-1)/n)*((b+n-1)/n);
    cout<<ans<<endl;
    return 0;
}
