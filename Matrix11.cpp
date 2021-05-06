#include <bits/stdc++.h>
using namespace std;

int n, m;
void Run()
{
	cin>>n>>m;
	vector<vector<int> > a;
	a.resize(n, vector<int> (m));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++)
	{
		for(int j=1; j<n; j++)
		{
			if(a[j][i]==1) 
			{
				a[j][i]+=a[j-1][i];
			}
		}
	}
	int res=0;
	for(int i=0; i<n; i++)
	{
	    sort(a[i].begin(), a[i].end());
		stack<int> st;
		int L[m]={}, R[m]={};
		st.push(-1);
		for(int j=0; j<m; j++)
		{
			while(st.size()>1&&a[i][st.top()]>=a[i][j]) st.pop();
			L[j]=st.top()+1;
			st.push(j);
		}
		while(!st.empty()) st.pop();
		st.push(m);
		for(int j=m-1; j>=0; j--)
		{
			while(st.size()>1&&a[i][st.top()]>=a[i][j]) st.pop();
			R[j]=st.top()-1;
			st.push(j);
		}
		for(int j=0; j<m; j++)
		{
			res=max(res, (R[j]-L[j]+1)*a[i][j]);
		}
	}
	cout<<res<<endl;

}

int main()
{
	int t=1;
	cin>>t;
	while(t--) Run();
	return 0;
}