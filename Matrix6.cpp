#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int> > a;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++)
    {
        a[i].resize(n);
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i==0||i==n-1)
        {
            for(int j=0; j<n; j++)
            {
                cout<<a[i][j]<<' ';
            }
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                if(j==0||j==n-1) cout<<a[i][j];
                cout<<' ';
            }
        }
        cout<<'\n';
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
