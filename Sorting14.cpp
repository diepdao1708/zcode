#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    long long dem=0;
    for(int i=1; i<a.size(); i++)
    {
        if(a[i]-a[i-1]>2) dem+=(a[i]-a[i-1]-1);
    }
    cout<<dem;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
