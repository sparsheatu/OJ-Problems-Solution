#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc;cin>>tc;
    string s;
    for(int i=1;i<=tc;i++)
    {
        printf("Case %d:\n",i);
 
        deque<int>dq;
        int n,m;cin>>n>>m;
        int c=0,val;
 
        for(int i=1;i<=m;i++)
        {
            cin>>s;
            if(s[1]=='u')
            {
                cin>>val;
                if(c<n)
                {
                    if(s[4]=='L')
                    {
                        cout<<"Pushed in left: "<<val<<endl;
                        dq.push_front(val);
                        c++;
                    }
                    else
                    {
                        cout<<"Pushed in right: "<<val<<endl;
                        dq.push_back(val);
                        c++;
                    }
                }
                else
                    cout<< "The queue is full"<<endl;
            }
            else
            {
                if(c!=0)
                {
                    if(s[3]=='L')
                    {
                        cout<<"Popped from left: "<<dq.front()<<endl;
                        c--;
                        dq.pop_front();
                    }
                    else
                    {
                        cout<<"Popped from right: "<<dq.back()<<endl;
                        c--;
                        dq.pop_back();
                    }
                }
                else
                    cout<< "The queue is empty"<<endl;
            }
        }
    }
    return 0;
}
 