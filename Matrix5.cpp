#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
int a[101][101]={};
int maxRow()
{
    int res=0;
    for(int i=1; i<=n; i++)
    {
        int ans=0;
        for(int j=1; j<=n; j++)
        {
            ans+=a[i][j];
        }
        res=max(res,ans);
    }
    return res;
}
int maxCol()
{
    int res=0;
    for(int i=1; i<=n; i++)
    {
        int ans=0;
        for(int j=1; j<=n; j++)
        {
            ans+=a[j][i];
        }
        res=max(res, ans);
    }
    return res;
}
void Run()
{
    cin>>n;
    int maxArr=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            maxArr+=a[i][j];
        }
    }
    int maxx=max(maxRow(), maxCol());
    int ans=maxx*2*n-maxArr*2;
    cout<<ans/2<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}