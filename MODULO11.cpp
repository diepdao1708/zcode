#include<bits/stdc++.h>
using namespace std;
long long a, b, c;
long long diff_mod(long long a, long long b, long long c)
{
    return (a>=b)?(a-b):(c+a-b);
}
long long sum_mod(long long a, long long b, long long c)
{
    long long x=a%c;
    long long y=b%c;
    return diff_mod(x, c-y, c);
}
long long prod_mod(long long a, long long b, long long c)
{
    if(b==1) return a%c;
    long long x=prod_mod(a, b/2, c);
    long long y=sum_mod(x,x,c);
    if(b%2==0) return y;
    return sum_mod(y, a, c);
}
void solve()
{
    cin>>a>>b>>c;
    cout<<prod_mod(a, b, c);
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
