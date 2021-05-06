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
vector<int> a;
bool cmp(vector<int> a, int x, int mod)
{
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]%x!=mod) return 0;
    }
    return 1;
}

void Run()
{
    cin>>n;
    if(n==0)
    {
        cout<<"0"<<endl;
        return;
    }
    a.clear();
    a.resize(n);
    int maxx=-1e9, minn=1e9;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        maxx=max(maxx, a[i]);
        minn=min(minn, a[i]);
    }
    int x=maxx-minn;
    int k=sqrt(x);
    int dem=0;
    for(int i=1; i<=k; i++)
    {
        if(x%i==0)
        {
            if(cmp(a, i, a[0]%i)) dem++;
            if(k*k!=x&&cmp(a, x/i, a[0]%(x/i))) dem++;
        }
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