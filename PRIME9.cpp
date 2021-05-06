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
    		int n;
    		cin >> n;
    		for (int i = 2; i <= n; i++)
    		{
    			int d = 0, c;
    			while ( n % i == 0)
    			{
    				c = i;
    				n = n / i;
    				d++;
    			}
    			if (d > 0)cout << c <<' ' << d << ' ';
    		}
    		cout << endl;
    	}
     
     	return 0;
    }
     