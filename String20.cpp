#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<string> a;
void Run()
{
    a.clear();
    getline(cin, s);
    string s1="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            if(s1.length()>0) a.push_back(s1);
            s1="";
        }
        else s1=s1+s[i];
    }
    if(s1.length()>0) a.push_back(s1);
    for(int i=a.size()-1; i>=0; i--) cout<<a[i]<<' ';
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


