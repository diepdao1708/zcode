#include<bits/stdc++.h>
using namespace std;
int a[21]{};

int n, k;
void khoiTao()
{
    for(int i=1; i<=k; i++) a[i]=i;
}
void Print()
{
    for(int i=1; i<=k; i++) cout<<a[i];
    cout<<' ';
}
void sinhToHop()
{
    khoiTao();
    while(1)
    {
        Print();
        int ii=k;
        while(ii>0&&a[ii]==n-k+ii) ii--;
        if(ii==0) return;
        a[ii]++;
        for(int i=ii+1; i<=k; i++) a[i]=a[i-1]+1;

    }
}
void Run()
{
    cin>>n>>k;
    sinhToHop();
    cout<<endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--) Run();
 	return 0;
}
