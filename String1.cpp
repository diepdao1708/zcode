#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<vector<int> > a, b;
void Run()
{
    cin>>s>>n;
    bool dd[500]={};
    for(int i=0; i<s.length(); i++) dd[s[i]]=1;
    int dem=0;
    for(int i='a'; i<='z'; i++)
    {
        if(dd[i]==0) dem++;
    }
    if(dem<=n) cout<<"1";
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

