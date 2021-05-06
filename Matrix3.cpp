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
void Run()
{
    cin>>n>>m;
    int a[101][101]={};
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    vector<int> res;
    int tren=1, duoi=n, trai=1, phai=m;
    int d=n*m;
    while(d>=1)
    {
        bool ok=1;
        for(int i=trai; i<=phai; i++)
        {
            if(d<1) 
            {
                ok=0;
                break;
            }
            res.push_back(a[tren][i]);
            d--;
        }
        tren++;
        for(int i=tren; i<=duoi; i++)
        {
            if(d<1) 
            {
                ok=0;
                break;
            }
            res.push_back(a[i][phai]);
            d--;
        }
        phai--;
        for(int i=phai; i>=trai; i--)
        {
            if(d<1) 
            {
                ok=0;
                break;
            }
            res.push_back(a[duoi][i]);
            d--;
        }
        duoi--;
        for(int i=duoi; i>=tren; i--)
        {
            if(d<1) 
            {
                ok=0;
                break;
            }
            res.push_back(a[i][trai]);
            d--;
        }
        trai++;
        if(ok==0) break;
    }
    for(int i=0; i<res.size(); i++) 
    {
        cout<<res[i]<<' ';
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