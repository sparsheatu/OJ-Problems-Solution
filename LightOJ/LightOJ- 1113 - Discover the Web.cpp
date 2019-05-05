#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int pnt=1;
    string s,stk[105];
    stk[1]="http://www.lightoj.com/";
    stk[pnt+1]=".";
    for(int i=1;i<=n;i++)
    {
        cout<<"Case "<<i<<":\n";
        while(cin>>s)
        {
            if(s=="VISIT")
            {
                cin>>stk[++pnt];
                cout<<stk[pnt]<<endl;
                stk[pnt+1]=".";
            }
            else if(s=="BACK")
            {
                if(pnt>1)
                    cout<<stk[--pnt]<<endl;
                else cout<<"Ignored"<<endl;
            }
            else if(s=="FORWARD")
            {
                if(stk[pnt+1]!=".")
                    cout<<stk[++pnt]<<endl;
                else cout<<"Ignored"<<endl;
            }
            else
                break;
        }
        pnt=1;
        stk[pnt+1]=".";
    }
    return 0;
}
 
