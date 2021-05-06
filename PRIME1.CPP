#include<stdio.h>
#include<math.h>
 
int main()
{
	int t;
	scanf("%d", &t);
	for (int k = 0; k < t; k++)
	{
		long long n, x;
		scanf("%lld", &n);
		x = sqrt(n);
		for (long long i = 2; i < x; i++)
		{
			while (n % i == 0)
			{
				printf("%lld ", i);
				n = n / i;
			}
		}
		if (n != 1) printf("%lld", n);
		printf("\n");
	}
 
 	return 0;
}