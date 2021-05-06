#include<bits/stdc++.h>
using namespace std;
void Run()
{
	int n;
	cin>>n;
	vector<int> a(n), res;
	for(int i=0; i<n; i++) cin>>a[i];
	res.push_back(0);
	bool ok=1;
	while(1)
	{
		if(res[res.size()-1]>=n-1)
		{
			break;
		}
		int tmp=0; 
		int vt;
		for(int i=res[res.size()-1]+1; i<res[res.size()-1]+1+a[res[res.size()-1]]; i++)
		{
			if(i+a[i]>=n-1) 
			{
				res.push_back(i);
				ok=0;
				break;
			}
			//cout<<a[i]<<endl;
			if(i+a[i]>tmp)
			{
				tmp=i+a[i];
				vt=i;
			}
		}
		if(ok==0) break;
		res.push_back(vt);
	}
	/* for(int i=0; i<res.size(); i++)
		cout<<res[i]<<' '; */
	cout<<res.size()<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}