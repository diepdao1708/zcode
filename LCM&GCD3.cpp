#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long poww(long long n, long long x)
{
	if(x==0) return 1;
	long long k=poww(n, x/2);
	if(x%2==0) return (k%mod*k%mod)%mod;
	return ((k%mod*k%mod)%mod*n)%mod;
}

int gcd(int a, int b)
{
	int tmp;
	while(b!=0)
	{
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
int gcd_a(vector<int> a)
{
	int ucln=a[0];
	for(int i=1; i<a.size(); i++)
	{
		ucln=gcd(ucln, a[i]);
	}
	return ucln;
}
void Run()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	int x=gcd_a(a);
	long long kq=poww(a[0], x);
	for(int i=1; i<a.size(); i++)
	{
		kq=(kq*poww(a[i], x))%mod;
	}
	cout<<kq<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}