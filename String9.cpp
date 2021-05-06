#include<bits/stdc++.h>
using namespace std;
string s;
int so(string x)
{
    int res=0;
    for(int i=0; i<x.length(); i++)
    {
        res=res*10+(x[i]-'0');
    }
    return res;
}
void Run()
{
    cin>>s;
    vector<int> a;
    string s1="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(s1.length()>0) 
            {
                int tmp=so(s1);
                a.push_back(tmp);
            }
            s1="";
        }
        else s1=s1+s[i];
    }
    if(s1.length()>0) 
    {
        int tmp=so(s1);
        a.push_back(tmp);
    }
    int maxx=0;
    for(int i=0; i<a.size(); i++)
    {
        maxx=max(maxx, a[i]);
    }
    cout<<maxx;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    cin.ignore();
    while(T--) Run();
    return 0;
}