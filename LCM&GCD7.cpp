#include<bits/stdc++.h>
using namespace std;
long long x, y, z, n;
long long gcd(long long a, long long b)
{
    while (a>0)
    {
        if (a<b) swap(a,b);
        a%=b;
    }
    return b;
}
long long lcm(long long a,long long b,long long c)
{
    long long tmp=a/gcd(a,b)*b;
    return tmp/gcd(tmp,c)*c;
}
void Run()
{
    cin>>x>>y>>z>>n;
    n--;
    long long hs=1,res;
    while (n--) hs*=10;
    long long tmp=lcm(x,y,z);
    long long m=hs/tmp;
    if (tmp*m<hs) m++;
    res=tmp*m;
    if (res>=hs*10)
    {
        cout<<-1<<endl;
        return;
    }

    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}

