#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long> a;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n, 0);
    for(int i=0; i<n; i++)
    {
        long long b;
        cin>>b;
        if(b<n) a[b]+=1;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==0) cout<<"-1"<<' ';
        else cout<<i<<' ';
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}