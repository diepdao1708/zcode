#include<bits/stdc++.h>
using namespace std;
void Run()
{
    int n, m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<m; j++) cin>>b[j];
    sort(a.begin(), a.end());
    int x=a[0]-1;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]==b[i])
            {
                cout<<a[j]<<' ';
                a[j]=x;
            }
            if(a[j]>b[i]) break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=x) cout<<a[i]<<' ';
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
