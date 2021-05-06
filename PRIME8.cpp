#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n, p;
		cin >> n >> p;
		int d = 0;
		for (int i = 2; i <= n; i++)
        {
            int j=i;
            while(j % p == 0)
            {
                d++;
                j = j / p;
            }
        }
        cout << d << endl;
	}
 	return 0;
}

