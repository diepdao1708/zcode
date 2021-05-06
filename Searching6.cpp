#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int n;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int minn=1000006;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(a[i]+a[j])<minn)
            {
                minn=abs(a[i]+a[j]);
                ans=a[i]+a[j];
            }
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
}
