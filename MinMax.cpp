#include<bits/stdc++.h>
using namespace std;
int s, d;
void MIN(int d, int s)
{
    int a[1001]={};
    int k=d;
    if((d-1)*9+1>=s)
    {
        a[0]=1;
        s-=1;
        d--;
        while(d)
        {
            if(s>=9)
            {
                a[d]=9;
                s-=9;
            }
            else
            {
                a[d]=s;
                s=0;
            }
            d--;
        }
        for(int i=0; i<k; i++) cout<<a[i];
        cout<<' ';
    }
    else
    {
        cout<<s-(d-1)*9;
        for(int i=1; i<k; i++) cout<<"9";
        cout<<' ';
    }
}
void MAX(int d, int s)
{
    while(s>=9)
    {
        cout<<"9";
        s=s-9;
        d--;
    }
    if(d>0) cout<<s;
    d--;
    for(int i=0; i<d; i++) cout<<"0";
}
void Run()
{
    cin>>d>>s;
    if(d==1&&s==0)
    {
        cout<<"0 0";
        return;
    }
    if(d*9<s||s==0)
    {
        cout<<"-1 -1";
        return;
    }

    MIN(d, s);
    MAX(d, s);
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}
