#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a, b;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n, 0);
    b.clear();
    b.resize(1000006, 0);
    bool ok=1;
    int ans=-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]>1&&ok==1)
        {
            ans=a[i];
            ok=0;
        }
    }
    cout<<ans;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
