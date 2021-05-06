    #include<iostream>
    #include<math.h>
    #include<string.h>
    #include<vector>
    using namespace std;
     
    int main()
    {
    	int t;
    	cin >> t;
    	for(int k = 0; k < t; k++)
    	{
    		int m, n, a, b;
    		cin >> m >> n >> a >> b;
    		int d = 0;
    		for(int i = m; i <= n; i++)
    		{
    			if(i % a == 0 || i % b == 0) d++;
    		}
    		cout << d;
    		cout << endl;
    	}
     	return 0;
    }
     