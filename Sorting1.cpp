#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long> a;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    if(n%2==0)
    {
        for(int i=0, j=n-1; i<=j; i++, j--)
        {
            cout<<a[j]<<" "<<a[i]<<' ';
        }
        cout<<endl;
    }
    else
    {
        for(int i=0, j=n-1; i<j; i++, j--)
        {
            cout<<a[j]<<" "<<a[i]<<' ';
        }
        cout<<a[n/2];
        cout<<endl;
    }
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}