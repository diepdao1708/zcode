#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m;
int a[501][501]={};
void Run()
{
    int l[501][501]={};
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=m; i++) l[1][i]=a[1][i];
    for(int i=1; i<=n; i++) l[i][1]=a[i][1];
    int maxx=0;
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<=m; j++)
        {
            if(a[i][j]==1)
            {
                if(a[i-1][j-1]==1&&a[i-1][j]==1&&a[i][j-1]==1) l[i][j]=min(l[i-1][j-1], min(l[i-1][j], l[i][j-1]))+1;
                else l[i][j]=1;
            }
            maxx=max(maxx, l[i][j]);
        }
    }
    cout<<maxx<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}