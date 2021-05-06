#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    long long tmp;
    while(b!=0)
    {
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
long long bcnn(long long a, long long b)
{
    return ((a/gcd(a, b))*b);
}
void Run()
{
    long long n;
    cin>>n;
    long long res=1;
    for(int i=2; i<=n; i++)
    {
        res=bcnn(res, i);
    }
    cout<<res;
    cout<<'\n';

}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}