#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
string s;
int a[11]={};
void khoitao(int n)
{
	for(int i=1; i<=n; i++) a[i]=i;
}
void print(int n)
{
	for(int i=1; i<=n; i++) cout<<a[i];
	cout<<endl;
}
bool check(string s, int a[])
{
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='D') 
		{
			if(a[i+1]<a[i+2]) return 0;
		}
		if(s[i]=='I')
		{
			if(a[i+1]>a[i+2]) return 0;
		}
	}
	return 1;
}
void Run()
{
	cin>>s;
	int n=s.length()+1;
	khoitao(n);
	while (1)
	{
		if(check(s, a))
		{
			print(n);
			return;
		}
		//print(n);
		int ii=n-1;
		while(a[ii]>a[ii+1]) ii--;
		if(ii<1) break;
		int k=n;
		while(a[ii]>a[k]) k--;
		swap(a[ii], a[k]);
		sort(a+ii+1, a+n+1);
	}
	
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}