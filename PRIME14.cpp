#include<stdio.h>
#include<math.h>
int souoc(int n)
{
	int x=sqrt(n);
	if (x*x!=n) return 0;
	for (int i = 2; i*i < n; i++)
		if(n%i==0) return 0;
	return 1;
}
 
int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		for(int j = 4; j <=n; j++)
		{
			if(souoc(j) == 1) printf("%d ", j);
		}
		printf("\n");
	}
 
return 0;
}