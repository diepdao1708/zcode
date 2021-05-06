#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
void Run()
{
    cin>>n>>m;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            cout<<i+1<<endl;
            return;
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
