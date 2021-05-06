#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int a[1000006];
void sangnguyento(int n)
{
	for(int i = 0; i <= n; i++)
	{
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i = 2; i <= n; i++)
	{
		if(a[i] == 1)
		{
			for(int j = i*2; j <= n; j += i)
			{
				a[j] = 0;
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	for(int k = 0; k < t; k++)
	{
		int n;
		cin >> n;
		sangnguyento(n);
		for(int i = 0; i <= n; i++)
		{
			if(a[i] == 1) cout << i << ' ';
		}
		cout << endl;
	}
 
 	return 0;
}