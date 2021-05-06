    #include<stdio.h>
    #include<math.h>
    int snt(int n)
    {
    	int ktra = 1, x;
    	x = sqrt(n);
    	if( n < 2) ktra = 0;
    	for ( int i = 2; i <= x; i++ )
    	{
    		if ( n % i == 0)
    		{
    			ktra = 0;
    			break;
    		}
    	}
    	return ktra;
    }
     
    int main()
    {
    	int t;
    	scanf ("%d", &t);
    	for (int i = 0; i < t; i++)
    	{
    		int m, n;
    		scanf ("%d%d", &n, &m);
    		for (int j = n; j <= m; j++)
    		{
    			if(snt(j) == 1) printf("%d ", j);	
    		}
    		printf("\n");
    	}
     
    return 0;
    }
     