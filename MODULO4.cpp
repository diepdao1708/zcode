#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	for(int k = 0; k <t; k++)
	{
		unsigned long long n, m;
		cin >> n >> m;
		unsigned long long d = 0;
		for(int i = 1; i <= n; i++)
		{
			d = d + i % m;
		}
		if(d == m) cout << "1" << endl;
		else cout << "0" << endl;
	}
 
	
 	return 0;
}