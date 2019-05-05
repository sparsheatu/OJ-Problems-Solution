#include <bits/stdc++.h>
#define ll long long
#define fir(a,b) for(int i=a;i<=b;i++)
#define fjr(a,b) for(int j=a;j<=b;j++)
 
using namespace std;
 
bool marked[47000],segment[100005];
vector <int> prime;
 
void sieve(int n)
{
    prime.push_back(2);
    for(int i=3;i<=n;i+=2)
        if(!marked[i])
        {
            prime.push_back(i);
            for(ll j=(ll)i*i;j<=n;j+=i+i)///here i*i exceed int so it must be long long
               marked[j]=1;
        }
}
 
int segmentsieve(int lw,int up)
{
    if(lw==1)lw=2;
    int sz=prime.size();
    for(int i=0;i<sz&&prime[i]*prime[i]<=up;i++)
    {
        ll p=prime[i],j=p*p;///same as biggest p is 46997   so p*p exceed int so it must ll
        if(j<lw)j=((lw+p-1)/p)*p;
        for(;j<=up;j+=p)
            segment[j-lw]=1;
    }
    int c=0;
    fir(lw,up)
        if(!segment[i-lw]) c++;
    memset(segment,0,sizeof(segment));
    return  c;
}
 
int main()
{
    sieve(47000);
    int tc,lw,up,n=1;
    cin>>tc;
    while(tc--)
    {
        scanf("%d%d",&lw,&up);
        printf("Case %d: %d\n",n++,segmentsieve(lw,up));
    }
    return 0;
}
 
