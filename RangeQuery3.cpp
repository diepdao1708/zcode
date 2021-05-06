#include<bits/stdc++.h>
using namespace std;
int prime[100006]={};
void snt()
{
	prime[0]=prime[1]=1;
	for(int i=2; i<=100000; i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*2; j<=100000; j+=i)
			{
				prime[j]=1;
			}
		}
	}
} //snt
void Run()
{
	int l,r;
	cin>>l>>r;
	int dem=0;
	for(int i=l; i<=r; i++)
	{
		if(prime[i]==0) dem++;
	}
	cout<<dem<<endl;
}
int main()
{
	int T;
	cin>>T;
	snt();
	while(T--) Run();
	return 0;
}