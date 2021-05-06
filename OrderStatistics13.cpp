#include<bits/stdc++.h>
using namespace std;
vector<int> a, b;
//vector<int> dd;
int n, m;
void Run()
{	
	cin>>n>>m;
	a.clear();
	a.resize(n);
	b.clear();
	b.resize(m);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	for(int i=1; i<n; i++) a[i]=a[i]+a[i-1];
	for(int i=1; i<m; i++) b[i]=b[i]+b[i-1];
	int maxx=0;
	int k=n<m?n:m;
	for(int i=0; i<k; i++)
	{
		int tmp=max(a[n-1]-a[i], b[m-1]-b[i]);
		int res=0;
		if(a[i]<b[i]) res=tmp+b[i];
		else res=tmp+a[i];
		maxx=max(maxx, res);
	}
	cout<<maxx;
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}