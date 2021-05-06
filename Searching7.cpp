#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
void Run()
{
    cin>>n>>k;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=a.size()-1; i>=a.size()-k; i--)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
