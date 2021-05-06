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
int a[101][101]={};
vector<int> res;
void Try(int i, int j, int s)
{
    if(i==n&&j==n)
    {
        res.push_back(s);
        return;
    }
    if(i+1<=n) Try(i+1, j, s+a[i+1][j]);
    if(j+1<=n) Try(i, j+1, s+a[i][j+1]);
}
void Run()
{
    cin>>n>>m;
    res.clear();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    Try(1, 1, a[1][1]);
    int dem=0;
    for(int i=0; i<res.size(); i++) 
    {
        if(res[i]==m) dem++;
    }
    cout<<dem<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}