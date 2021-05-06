#include<bits/stdc++.h>
using namespace std;
int n;
int k;
vector<int> a, b;

void Run()
{
    cin>>n>>k;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    b.clear();
    b.resize(n);
    b[0]=a[0];
    for(int i=1; i<n; i++)
    {
        b[i]=b[i-1]+a[i];
    }
    int maxx=-1e9;
    int vt=0;
    for(int i=k-1; i<n; i++)
    {
        if(maxx<b[i]-b[i-k+1]+a[i-k+1])
        {
            maxx=b[i]-b[i-k+1]+a[i-k+1];
            vt=i;
        }
    }
    for(int i=vt-k+1; i<=vt; i++) cout<<a[i]<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}
