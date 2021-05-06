#include<bits/stdc++.h>
using namespace std;
int a[21]{};

int n;
void khoiTao()
{
    for(int i=1; i<=n; i++) a[i]=i;
}
void Print()
{
    for(int i=1; i<=n; i++) cout<<a[i];
    cout<<' ';
}
void sinhHoanVi()
{
    khoiTao();
    while(1)
    {
        Print();
        int ii=n-1;
        while(ii>0&&a[ii]>a[ii+1]) ii--;
        if(ii==0) return;
        int jj=n;
        while(a[jj]<a[ii]) jj--;
        swap(a[ii], a[jj]);
        sort(a+1+ii, a+1+n);
    }
}
void Run()
{
    cin>>n;
    sinhHoanVi();
    cout<<endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--) Run();
 	return 0;
}
