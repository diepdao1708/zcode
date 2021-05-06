#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int a[100000];
bool ngto(int n)
{
	for ( int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
 
int main()
{
	int t;
	cin >> t;
	
	for (int b = 0; b < t; b++)
	{
		unsigned long long n, i = 1;
		cin >> n;
		while(i <= n)
		{
			if (i == 1) a[i] = 1;
			if (i == 2) a[i] = 2;
			if (i == 3) a[i] = 3;
			if(i >= 4)
			{
				if (i % 2 == 0) a[i] = 2;
				else
				{
					if (ngto(i) == 1) a[i] = i;
					else for (int j = 3; j <= sqrt(i); j++)
					{
						if (i % j == 0)
						{
							a[i] = j;
							break;
						}
				
					}
			
				}
			}
			i++;
		}
		for(int k = 1; k <= n; k++)
		{
			cout << a[k] << ' ' ;
		}
		cout << endl;
		
	
	}
 
 	return 0;
}