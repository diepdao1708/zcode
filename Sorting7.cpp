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
	b.resize(n);
	for(int i=0; i<n; i++) 
	{
		cin>>a[i];
		b[i]=a[i];
	}
	int vt=0;
	bool ok=0;
	sort(a.begin(), a.end());
	for(int i=0; i<n; i++)
	{
		if(a[i]!=b[i]&&ok==0)
		{
			cout<<i+1<<' ';
			ok=1;
		}
		if(a[i]!=b[i]) vt=i;
	}
	cout<<vt+1;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}