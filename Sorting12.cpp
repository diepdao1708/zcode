
#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
void Run()
{
    cin>>n>>m;
    b.clear();
    b.resize(m);
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    cout<<a[a.size()-1]*b[0];
    cout<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}