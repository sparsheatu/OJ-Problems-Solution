#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    int tc; cin>>tc;
    string s1,s2;
    getchar();
    for(int i=1;i<=tc;i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        int ar1[30]={0},ar2[30]={0};
        for(int j=0;j<s1.length();j++)
            if(s1[j]!=' ')
            {
                if(s1[j]<97)ar1[s1[j]-'A']++;
                else ar1[s1[j]-'a']++;
            }
        for(int j=0;j<s2.length();j++)
            if(s2[j]!=' ')
            {
                if(s2[j]<97)ar2[s2[j]-'A']++;
                else ar2[s2[j]-'a']++;
            }
        bool flag=1;
        for(int j=0;j<26;j++)
        {
            if(ar1[j]!=ar2[j])
            {
                flag=0;break;
            }
        }
        cout<<"Case "<<i<<": ";
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}