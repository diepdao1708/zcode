#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(!a) return b;
	return gcd(b%a, a);
}
long long reduceB(long long a, string b)
{
	long long mod=0;
	for(int i=0; i<b.length(); i++)
	{
		mod=(mod*10+b[i]-'0')%a;
	}
	return mod;
}
long long gcdLarge(long long a, string s)
{
	long long num=reduceB(a, s);
	return gcd(a, num);
}
void Run()
{
	long long n;
	cin>>n; cin.ignore();
	string s; cin>>s;
	cout<<gcdLarge(n, s);
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}

