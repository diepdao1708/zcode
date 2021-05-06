#include<bits/stdc++.h>
using namespace std;
long long n, k;
vector<long long> a;
void Run()
{
    cin>>n>>k;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    long long dem=0;
    for(int i=0; i<n; i++) 
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==k) dem++;
        }
    }
    cout<<dem;
    cout<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}