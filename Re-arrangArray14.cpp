#include<bits/stdc++.h>
using namespace std;
long long k,n;
vector<long long> a;
void Run()
{
    cin>>k>>n;
    a.clear();
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n; j++)
        {
            long long b;
            cin>>b;
            a.push_back(b);
        }
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++) cout<<a[i]<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}