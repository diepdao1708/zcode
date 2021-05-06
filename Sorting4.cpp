#include<bits/stdc++.h>
using namespace std;
int n, m;

void Run()
{        
    vector<int> f(1e5+1,0),f1(1e5+1,0);
    cin>>n>>m;
    int tmp;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        f[tmp]++;
    }
    for(int i=0; i<m; i++)
    {
        cin>>tmp;
        f1[tmp]++;
    }
    for(int i=0; i<=100000; i++)
    {
        int sl=max(f[i], f1[i]);
        for(int j=0; j<sl; j++) cout<<i<<' ';
    }
    cout<<endl;
    for(int i=0; i<=100000; i++)
    {
        int sl=min(f[i], f1[i]);
        for(int j=0; j<sl; j++) cout<<i<<' ';
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}