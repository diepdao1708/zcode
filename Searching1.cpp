#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
int Sreaching(long long x, vector<long long> a, long long l, long long r)
{
    long long res=-1;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(a[mid]==x) return mid;
        if(a[mid]>x) r=mid-1;
        if(a[mid]<x) l=mid+1;
    }
    return res;
}
void Run()
{
    cin>>n>>m;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    if(Sreaching(m, a, 0, a.size()-1)!=-1) cout<<1;
    else cout<<"-1";#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
void Run()
{
    cin>>n>>m;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==m)
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"-1";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
