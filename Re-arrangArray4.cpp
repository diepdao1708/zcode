#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
void Run()
{
    a.clear();
    cin>>n;
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int k=n-n/2;
    int m=k;
    for(int i=0; i<m; i++)
    {
        cout<<a[i]<<' ';
        if(k!=n) cout<<a[k]<<' ';
        k++;
    }
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}