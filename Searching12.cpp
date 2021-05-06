#include<bits/stdc++.h>
using namespace std;


void Run()
{
    int n, k;
    cin>>n>>k;
    int dd[100005]={};
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        dd[a[i]]=1;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>k)
        {
            int res=a[i]-k;
            if(dd[res]==1)
            {
                cout<<"1"<<endl;
                return;
            }
        }
    }
    cout<<"-1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
