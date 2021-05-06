#include<stdio.h>
#include<math.h>
int a[100], n;
void output()
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf(" ");
}
void sinh(int i)
{
	for (int j = 0; j < 2; j++)
	{
		a[i] = j;
		if ( i == n - 1) output();
		else sinh(i + 1);
	}
}
int main()
{	
	int t;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		sinh(0);
		printf("\n");
	}
 	return 0;
}