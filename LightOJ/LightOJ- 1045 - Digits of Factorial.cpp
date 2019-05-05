/*
	No. of digit in : num = log(num).
	Hence, no of digit in : (num1*num2*----*numn)= log(num1)+log(num2)+---+log(numn).
*/
#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
double val[1000005];
int main()
{
    val[0]=0.00;
    for(int i=1;i<=1000005;i++)val[i]=val[i-1]+log(i);
    int n;
    scanf("%d",&n);
    int num,base;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&num,&base);
        printf("Case %d: %d\n",i,(int)(val[num]/log(base))+1);
    }
    return 0;
}
 
