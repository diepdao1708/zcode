#include<bits/stdc++.h>
using namespace std;
long long k;
vector<long long> a;
void Run()
{
    cin>>k;
    a.clear();
    a.resize(k+1, 0);
    for(int i=0; i<k; i++)
    {
        long long b;
        cin>>b;
        if(b>0&&b<=k) a[b]++;
    }
    for(int i=1; i<=k; i++)
    {
        if(a[i]==0) 
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<k+1;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}