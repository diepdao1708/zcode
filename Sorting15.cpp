#include<bits/stdc++.h>
using namespace std;

void Run()
{
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    long long res=0;
    for(int i=0; i<n; i++)
    {
        int it=lower_bound(a.begin(), a.end(), a[i]+k)-a.begin();
        res+=(it-1-i);
    }
    cout<<res;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
