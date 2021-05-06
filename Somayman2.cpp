#include<bits/stdc++.h>
using namespace std;
string s;
int so(char c)
{
    return (c-'0');
}
void Run()
{
    cin>>s;
    if(s=="0")
    {
        cout<<"0"<<endl;
        return;
    }
    int n=0;
    for(int i=0; i<s.length(); i++)
    {
        n=n+so(s[i]);
        n=n%9;
    }
    if(n==0) cout<<"1";
    else cout<<"0";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}