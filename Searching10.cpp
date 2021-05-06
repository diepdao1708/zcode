#include<bits/stdc++.h>
using namespace std;
int prime[1000005]={};
vector<int> a;
void snt()
{
    prime[0]=prime[1]=1;
    for(int i=2; i<=1000000; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*2; j<=1000000; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2; i<=1000000; i++)
    {
        if(prime[i]==0) a.push_back(i);
    }
}
int Binary(int n)
{
    int l=0, r=a.size();
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==n)
        {
            return mid;
        }
        if(a[mid]<n) l=mid+1;
        if(a[mid]>n) r=mid-1;
    }
    return -1;
}
void Run()
{
    int n;
    cin>>n;
    for(int i=0; i<a.size(); i++)
    {
        if(n<=a[i])
        {
            cout<<"-1"<<endl;
            return;
        }
        int k=Binary(n-a[i]);
        if(k!=-1)
        {
            cout<<a[i]<<' '<<n-a[i]<<endl;
            return;
        }
    }
}
int main()
{
    snt();
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
