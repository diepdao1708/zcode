
#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a, b;
void Run()
{
    cin>>n>>m;
    a.clear();
    for(int i=0; i<n; i++) 
    {
        long long tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i=0; i<m; i++) 
    {
        long long tmp;
        cin>>tmp;
        a.push_back(tmp);
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