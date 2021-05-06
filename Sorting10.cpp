#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a, b;
void Run()
{        
    cin>>n;
	a.clear();
	a.resize(n);
	b.clear();
	b.resize(11, 0);
	for(int i=0; i<n; i++) 
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		while(a[i]>0)
		{
			int tmp=a[i]%10;
			b[tmp]=1;
			a[i]/=10;
		}
	}
	for(int i=0; i<10; i++) 
	{
		if(b[i]==1) cout<<i<<' ';
	}
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}