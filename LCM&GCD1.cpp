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
    long long a, b;
    cin>>a>>b;
    cout<<bcnn(a, b)<<' '<<gcd(a, b);
    cout<<'\n';

}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}