#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
bool songuyento(int n)
{
	if(n == 0 || n == 1) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	for(int k = 0; k < t; k++)
	{
		int n;
		cin >> n;
		cout << "1" << ' ';
		for(int i = 2; i <= n; i++)
		{
			if(songuyento(i) == 1) cout << i << ' ';
			else
			{
				for(int j = 2; j <= sqrt(i); j++)
				{
					if(i % j == 0 && songuyento(j) == 1)
					{
						cout << j << ' ';
						break;
					}
				}
			}
		}
		cout << endl;
		
	}
	
 	return 0;
}