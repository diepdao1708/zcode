#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int> > a, b;
void Run()
{
    cin>>n>>m;
    a.clear();
    a.resize(n);
    b.clear();
    b.resize(n);
    for(int i=0; i<n; i++)
    {
        a[i].resize(m);
        b[i].resize(m, 0);
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==1)
            {
                for(int k=0; k<m; k++) b[i][k]=1;
                for(int k=0; k<n; k++) b[k][j]=1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<b[i][j]<<' ';
        }
        cout<<endl;
    }

    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
