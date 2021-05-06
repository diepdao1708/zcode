
#include<bits/stdc++.h>
using namespace std;
long long n, k;
vector<long long> a;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    vector<long long> b;
    for(int i=1; i<n; i++)
    {
        long long tmp=a[i]-a[i-1];
        b.push_back(tmp);
    }
    sort(b.begin(), b.end());
    cout<<b[0]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}