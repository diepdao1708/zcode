#include<bits/stdc++.h>
using namespace std;
long long a, x, y;
long long GCD(long long a, long long b)
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

void Run()
{
    cin>>a>>x>>y;
    for(int i=1; i<=GCD(x, y); i++)
    {
        cout<<a;
    }
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}

