#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long> a;
void Run()
{
    cin>>n;
    a.clear();
    for(int i=0; i<n; i++)
    {
        long long b;
        cin>>b;
        if(b!=0) a.push_back(b);
    }
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<' ';
    }
    for(int i=0; i<n-a.size(); i++) cout<<"0"<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}