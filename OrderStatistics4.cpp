#include<bits/stdc++.h>
using namespace std;
vector<long long> a, b;
//vector<int> dd;
long long n;
void Run()
{	
	cin>>n;
	a.clear();
	a.resize(n);
	b.clear();
	b.resize(n);
	long long maxx=0;
	for(int i=0; i<n; i++) cin>>a[i];
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[0]+a[2];
	maxx=max(b[1], b[2]);
	for(int i=3; i<n; i++)
	{
		b[i]=a[i];
		long long k=0;
		k=max(b[i-2], b[i-3]);
		b[i]+=k;
		//cout<<b[i]<<' ';
		maxx=max(maxx, b[i]);
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