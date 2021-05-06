    #include<stdio.h>
    #include<math.h>
    int a[1000006];
     
    int main()
    { 
        int t;
    	scanf("%d", &t);
    	for(int j = 0; j < t; j++)
    	{
    		long long n;
    		scanf("%lld", &n);
    		long long i, x;
    		x = sqrt(n);
    		int vt = 0;
    	    for (i = 2; i <= x; i++)
        	{
        	    while (n % i == 0)
        	        {
        	        	a[vt] = i;
                	    n = n / i;
                	    vt++;
                	}
        	}
      		if(n != 1) printf ("%lld\n", n);
      		else printf("%d\n", a[vt - 1]);
    	}
    	
    return 0;
    } 