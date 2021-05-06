#include<bits/stdc++.h>
using namespace std;
string s;
int n;
vector<int> a, b;
void Run()
{
    cin>>n;
    if(n<2)
    {
        cout<<"-1"<<endl;
        return;
    }
    a.clear();
    b.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    b.push_back(a[0]);
    int maxx=-1e9;
    for(int i=1; i<n; i++)
    {
        sort(b.begin(), b.end());
        maxx=max(maxx, a[i]-b[0]);
        b.push_back(a[i]);
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
