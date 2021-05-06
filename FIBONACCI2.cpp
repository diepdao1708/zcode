#include<bits/stdc++.h>
using namespace std;
long long f[10002] = {};
void ktra()
{
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	for(long long i = 3; i < 10001; i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
}
void Run()
{
        long long n;
		cin>>n;
		for(int i=0; i<=10000; i++)
        {
            if(f[i]==n)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO";
		cout << endl;
}
int main()
{
	int t;
	cin >> t;
	ktra();
	for (int k = 0; k < t; k++)
	{
		Run();
	}
 	return 0;
}
