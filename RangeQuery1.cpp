#include<bits/stdc++.h>
using namespace std;
long long n, k;
vector<long long> a;
void Run()
{
    cin>>n>>k;
    a.clear();
    a.resize(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<n; i++)
    {
        a[i]+=a[i-1];
    }
    for(int i=0; i<k; i++)
    {
        int l, r;
        cin>>l>>r;
        if(l>1) cout<<a[r-1]-a[l-2]<<endl;
        else cout<<a[r-1]<<endl;
    }
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}