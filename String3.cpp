#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<int> a, b;
void Run()
{
    cin>>s;
    string s1="";
    for(int i=0; i<s.length(); i++) s1=s[i]+s1;
    int dem;
    if(s1[0]=='1') dem=1;
    else dem=0;
    for(int i=1; i<s1.length(); i++)
    {
        if(s1[i]=='1')
        {
            if(i%4==0) dem+=6;
            if(i%4==1) dem+=2;
            if(i%4==2) dem+=4;
            if(i%4==3) dem+=8;
        }
    }
    if(dem%5==0) cout<<"Yes";
    else cout<<"No";
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}


