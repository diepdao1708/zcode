#include<bits/stdc++.h>
using namespace std;
string s;
int n;
vector<int> a, dd;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    int L[1005]={};
    int tmp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int maxx=0;
    for(int i=0; i<n; i++)
    {
        L[i]=1;
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j]&&L[i]<L[j]+1) L[i]=L[j]+1;
            if(L[i]>maxx) maxx=L[i];
        }
    }
    cout<<maxx<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}
