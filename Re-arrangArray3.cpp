#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
void Run()
{
    cin>>n>>k;
    a.clear();
    a.resize(n);
    int count=0;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        if(a[i]<=k) count++;
    }
    int bad=0;
    for(int i=0; i<count; i++) 
    {
        if(a[i]>k) bad++;
    }
    int ans=bad;
    for(int i=0, j=count; j<n; j++, i++)
    {
        if(a[i]>k) bad--;
        if(a[j]>k) bad++;
        ans=min(ans, bad);
    }
    cout<<ans;
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}