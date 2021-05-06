#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long> a;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}