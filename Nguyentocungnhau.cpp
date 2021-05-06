#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<string> a;
int gcd(int a, int b)
{
    int tmp;
    while(b!=0)
    {
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
bool snt(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
void Run()
{
    cin>>n;
    int dem=0;
    for(int i=1; i<=n; i++)
    {
        if(gcd(i, n)==1) dem++;
    }
    if(snt(dem)==1) cout<<"1";
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


