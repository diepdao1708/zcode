#include<bits/stdc++.h>
using namespace std;

long long mod(string a, long long b)
{
    long long tmp=0;
    for(int i=0;i<a.length();i++)
    {
        tmp=tmp*10+(a[i]-'0');
        if (tmp>b) tmp%=b;
    }
    return tmp;
}
long long poww(long long a, long long b,long long m)
{
    if(b==0) return 1;
    long long x=poww(a, b/2, m);
    if(b%2==0) return (x%m*x%m)%m;
    return a*(x%m*x%m)%m;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long b,m;
        string a;
        cin>>a>>b>>m;
        long long tmp=mod(a,m);
        long long res=poww(tmp,b,m);
        cout<<res<<endl;
    }
    return 0;
}
