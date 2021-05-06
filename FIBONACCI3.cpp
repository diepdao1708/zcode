#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
long long f[20] = {}, F[2000]={};
void ktra()
{
    F[0]=1;
    F[1]=1;
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	for(long long i = 3; i < 18; i++)
	{
		f[i]=f[i-1]+f[i-2];
		F[f[i]]=1;
	}
}
int main()
{
	int t;
	cin >> t;
	ktra();
	for (int k = 0; k < t; k++)
	{
		int n;
		cin >> n;
		long long a[100] = {};
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n; i++)
		{
			if( F[a[i]]==1)  cout << a[i] << ' ';
		}
		cout << endl;
	}
 	return 0;
}
