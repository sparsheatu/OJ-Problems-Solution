#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":\n";
        int n,q,ar[100005];cin>>n>>q;
        for(int j=0;j<n;j++)scanf("%d",&ar[j]);
        for(int j=0;j<q;j++)
        {
            int a,b;scanf("%d%d",&a,&b);
            a= lower_bound(ar,ar+n,a)-ar;
            b= upper_bound(ar,ar+n,b)-ar;
            printf("%d\n",b-a);
        }
    }
    return 0;
}
 