
#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n+1, 0);
    for(int i=1; i<n; i++)
    {
        long long tmp;
        cin>>tmp;
        a[tmp]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            cout<<i<<endl;
            break;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
