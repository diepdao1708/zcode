#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k = 0; k<t; k++)
	{
		long long n;
		cin>>n;
		long long a[n+1]={};
		for(int i = 1; i<= n; i++)
		{
			cin>>a[i];
		}
		cout<<a[1]*a[2]<<' ';
		for(int i = 2; i < n; i++)
		{
			cout<<a[i-1]*a[i+1]<<' ';
		}
		cout<<a[n-1]*a[n] << endl;
	}

 	return 0;
}
