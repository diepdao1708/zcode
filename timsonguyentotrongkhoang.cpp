#include<bits/stdc++.h>
using namespace std;
long long F[1000006]={};
void snt(long long b)
{
    F[0]=F[1]=1;
    for(int i=2; i<=b; i++)
    {
        if(F[i]==0)
        {
            for(int j=i*2; j<=b; j+=i)
            {
                F[j]=1;
            }
        }
    }
}
void Run()
{
    long long a, b;
    cin>>a>>b;
    if(a>b) swap(a, b);
    snt(b);
    for(int i=a; i<=b; i++)
    {
        if(F[i]==0) cout<<i<<' ';
    }
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}