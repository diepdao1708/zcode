#include<bits/stdc++.h>
using namespace std;
long long n;
long long so(long long n)
{
    long long dem=0;
    while(n>0)
    {
        dem+=n%10;
        n/=10;
    }
    return dem;
}
void Run()
{
    cin>>n;
    while(n>9)
    {
        n=so(n);
    }
    cout<<n<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}
