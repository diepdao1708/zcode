#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long long x,y;
		long long p;
		cin>>x>>y>>p;
		long long m = x%p;
		for(long long i = 1; i < y; i++)
		{
			x = (x%p) * m;
		}
	
		cout << x % p << endl;
		
	}
 
 	return 0;
}