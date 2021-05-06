#include<bits/stdc++.h>
using namespace std;
string s;
long long x;
long long mod(string s, long long x)
{
    long long tmp=0;
    for(int i=0; i<s.length(); i++)
    {
        tmp=tmp*10+(s[i]-'0');
        if(tmp>x) tmp=tmp%x;
    }
    return tmp;
}
void Run()
{
    cin>>s>>x;
    cout<<mod(s, x);
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
