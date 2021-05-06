#include<bits/stdc++.h>
using namespace std;
int n;
int l, r;
vector<int> a;
bool tangDan(vector<int> &a, int &vt, int l)
{
    for(int i=l+1; i<vt; i++)
    {
        if(a[i]<a[i-1]) return 0;
    }
    return 1;
}
bool giamDan(vector<int> &a, int &vt, int r)
{
    for(int i=vt+2; i<=r; i++)
    {
        if(a[i]>a[i-1]) return 0;
    }
    return 1;
}
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n+1);
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>l>>r;
    int maxx=0;
    int vt=0;
    for(int i=l; i<=r; i++)
    {
        if(maxx<a[i])
        {
            maxx=a[i];
            vt=i;
        }
    }
    if(tangDan(a, vt, l)==1&&giamDan(a, vt, r)==1) cout<<"Yes";
    else cout<<"No";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}
