#include<bits/stdc++.h>
using namespace std;
void Run()
{
	string s;
	int k;
	cin>>s>>k;
	int dem=0;
	for(int i=0; i<s.length(); i++)
	{
		vector<bool> dd(1000, 0);
		int a=0;
		for(int j=i; j<s.length(); j++)
		{
			if(dd[s[j]]==0) 
			{
				a++;
				dd[s[j]]=1;
			}
			if(a==k)
			{
				dem++;
			}
			if(a>k) break;
		}
	}
	cout<<dem<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}