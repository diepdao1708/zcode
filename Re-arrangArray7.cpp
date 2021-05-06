#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
string so(int n)
{
    string s="";
    while(n>0)
    {
        char tmp=(char)(n%10+'0');
        n=n/10;
        s=tmp+s;
    }
    return s;
}
bool cmp(int x, int y)
{
    string A=so(x);
    string B=so(y);
    return A+B>B+A;
}
void Run()
{
    /* cin>>n;
    cout<<so(n); */
    a.clear();
    cin>>n;
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end(), cmp);
    for(int i=0; i<n; i++) cout<<a[i];
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}