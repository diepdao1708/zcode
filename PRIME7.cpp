#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
bool ngto(long long n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
 
int main()
{
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		long long n, d = 0;
		cin >> n;
		for (int i = 2; i <= n; i++)
		{
			if (ngto(i) == 1)
			{
				if (n % i == 0)
				{
					d++;
					n = n / i;
				}
			}
		}
		if (d == 3 && n == 1) cout << "1" << endl;
		else cout << "0" << endl;
			
	}
 
 	return 0;
}