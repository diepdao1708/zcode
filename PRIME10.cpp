#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
bool nt(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
int chuso(int n)
{
	int d = 0;
	while (n > 0)
	{
		d = d + n % 10;
		n = n / 10;
	}
	return d;
}
int tong(int n)
{
	int m = n, a[100000] = {}, id=0;
	for(int i = 2; i <= n; i++)
	{
		while (m % i == 0)
		{
			a[id] = i;
			m = m / i;
			id++;
			
		}
	}
	int s = 0;
	for (int i = 0; i < id; i++)
	{
		s = s + chuso(a[i]);
	}
	return s;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		unsigned long long n;
		cin >> n;
		if (nt(n) == 0 && tong(n) == chuso(n)) cout << "YES" << endl;
		else cout << "NO" << endl;

	}

 	return 0;
}

