#include<bits/stdc++.h>
using namespace std;
vector<string> xau;
vector<string> bd(string a)
{
    vector<string> xau;
    string s="";
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==' ') 
        {
            if(s.length()>0) xau.push_back(s);
            s="";
        }
        else s=s+a[i];
    }
    if(s.length()>0) xau.push_back(s);
    return xau;
}
void Run()
{
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z') s[i]-=32;
    }
    xau=bd(s);
    for(int i=0; i<xau.size()-1; i++)
    {
        //cout<<xau[i]<<' ';
        for(int j=0; j<xau[i].length(); j++)
        {
            if(j!=0) cout<<(char)(xau[i][j]+('a'-'A'));
            else cout<<xau[i][j];
        }
        if(i==xau.size()-2) cout<<",";
        cout<<' ';
    }
    cout<<xau[xau.size()-1];
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}