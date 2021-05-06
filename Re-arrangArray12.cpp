#include<bits/stdc++.h>
using namespace std;
vector<int> a;
void Run()
{	
	int n;
	cin>>n;
	a.clear();
	a.resize(n);
	for(int i=0; i<n; i++) cin>>a[i];
	long long res=1, kq=-1e9;
	for(int i=0; i<n; i++)
	{
		res=1;
		for(int j=i; j<n; j++)
		{
			res=res*a[j];
			kq=max(kq, res);
		}
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