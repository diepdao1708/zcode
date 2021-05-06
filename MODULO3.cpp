#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		unsigned long long n, k;
		cin>>n>>k;
		unsigned long long s;
		if(n<=k) s = n*(n+1)/2;
		else
		{
			unsigned long long m = n -  n/k*k;
			s = n/k*((k-1)*(k)/2)+ m*(m+1)/2;
		}
		cout << s<< endl;
	}
 
 	return 0;
}