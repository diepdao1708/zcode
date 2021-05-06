#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<string> a;
void Run()
{
    cin>>s;
    if(s[s.length()-1]=='6'&&s[s.length()-2]=='8') cout<<"1";
    else cout<<"0";
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


