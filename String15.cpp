#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<int> a, b;
void pre()
{
    a.resize(1001);
    a[0]=0;
    a[1]=1;
    for(int i=2; i<=1000; i++)
    {
        a[i]=a[i-1]+i;
    }
}
void Run()
{
    cin>>s;
    int dd[500]={};
    long long dem=0;
    for(int i=0; i<s.length(); i++) dd[s[i]]++;
    for(int i='a'; i<='z'; i++) dem+=a[dd[i]];
    cout<<dem;
    cout<<'\n';
}
//1-1
//2-3
//3-6
//4-10
//5-
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        pre();
        Run();
    }
    return 0;
}


