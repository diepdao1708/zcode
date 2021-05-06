#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k = 0; k < t; k++)
	{
		int n;
		cin>>n;
		int a[10000]={};
		for(int i = 1; i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i = 1; i <=n; i++)
		{
			for(int j = n; j > i; j--)
			{
				if(a[i] < a[j])
				{
					int gan = a[i];
					a[i] = a[j];
					a[j] = gan;
				}
			}
		}
		int d = n;
		for(int i = 1; i <= n/2; i++)
		{
			cout << a[i] << ' ';
			cout << a[d] << ' ';
			d--;
		}
		if(n % 2 == 1) cout << a[n/2+1];
		cout << endl;
	}
 	return 0;
}
