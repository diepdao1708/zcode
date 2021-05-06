#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
bool check(vector<long long> a)
{
    for(int i=1; i<a.size(); i++)
    {
        if(a[i]!=a[i-1]) return true;
    }
    return false;
}
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    if(check(a)==false) cout<<"-1"<<endl;
    else
    {
        sort(a.begin(),a.end());
        printf("%d ", a[0]);
        for(int i=1; i<n; i++)
        {
            if(a[i]>a[0])
            {
                cout<<a[i]<<endl;
                return;
            }
        }
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
