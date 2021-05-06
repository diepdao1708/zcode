#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<vector<int> > a, b;
int so(char c)
{
    return (c-'0');
}
void Run()
{
    cin>>s;
    int le=0, chan=0;
    for(int i=0; i<s.length(); i++)
    {
        if(i%2==0) le+=so(s[i]);
        else chan+=so(s[i]);
    }
    if((chan-le)%11==0) cout<<"1";
    else cout<<"0";
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}

