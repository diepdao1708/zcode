#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long> a, f;
void Run()
{
	cin>>n;
	a.clear();
	a.resize(n);
	f.clear();
	f.resize(n);
	for(int i=0; i<n; i++) cin>>a[i];
	f[0]=a[0];
	for(int i=1; i<n; i++) f[i]=f[i-1]+a[i];
	//for(int i=0; i<n; i++) cout<<f[i]<<' ';
	long long maxx=-1e9, f_min=0;
	for(int i=0; i<n; i++)
	{
		maxx=max(maxx, f[i]-f_min);
		f_min=min(f_min, f[i]);
	}
	cout<<maxx<<endl;
	
}
int main()
{
	int T;
	cin>>T;
	while(T--) Run();
	return 0;
}