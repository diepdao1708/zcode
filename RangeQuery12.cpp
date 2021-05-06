#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long> a1, a2;
void Run()
{
    cin>>n;
    a1.clear();
    a2.clear();
    a1.resize(n+1);
    a2.resize(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>a2[i];
    }
    int maxx=0;
    for(int i=0; i<n; i++)
    {
        long long tmp1=0, tmp2=0;
        for(int j=i; j<n; j++)
        {
            tmp1+=a1[j];
            tmp2+=a2[j];
            if(tmp1==tmp2) maxx=max(maxx, j-i+1);
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