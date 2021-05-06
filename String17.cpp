#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<int> a, b;
void Run()
{
    cin>>s;
    int dd[500]={};
    for(int i=0; i<s.length(); i++) dd[s[i]]++;
    for(int i=0; i<s.length(); i++)
    {
        if(dd[s[i]]==1) cout<<s[i];
    }
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        Run();
    }
    return 0;
}


