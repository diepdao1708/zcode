#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<int> a, b;
void Run()
{
    string s;
    getline(cin, s);
    int dem=1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' '||s[i]=='\t') dem++;
    }
    cout<<dem;
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--) Run();
    return 0;
}


