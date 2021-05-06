#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
bool ngto(int n)
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
		for (int i = 0; i <= sqrt(n); i++)
		{
			if(ngto(i) == 1) d++;
		}
		
		cout << d << endl;
	}
 	return 0;
}