#include<stdio.h>
#include<math.h>
 
int main()
{
	int t,mol=1e9+7;
	scanf("%d", &t);
	for (int j = 0; j < t; j++)
	{
		int n;
		scanf("%d", &n);
		int s0 = 0, s1 = 1, s;
		if (n == 0)
        {
            printf ("0\n");
        }
		if (n == 1)
        {
            printf ("1\n");
        }
		if (n > 1)
		{
			for (int i = 2; i <= n; i++)
			{
				s = (s0%mol + s1%mol) %mol;
				s0 = s1;
				s1 = s;
			}
			
			printf("%d\n", s);
		}
	}
 	return 0;
} 