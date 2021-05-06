    #include<iostream>
    #include<math.h>
    #include<string.h>
    #include<vector>
    using namespace std;
     
     
    int main()
    {
    	int t;
    	cin >> t;
    	for (int j = 0; j < t; j++)
    	{
    		int n, k;
    		cin >> n >> k;
    		int m = n, a[100000] = {}, id=1;
    		for(int i = 2; i <= n; i++)
    		{
    			while (m % i == 0)
    			{
    				a[id] = i;
    				m = m / i;
    				id++;
    			}
    		}
    		if(k <= 0 || k >= id) cout << "-1";
    		else cout << a[k];
    		cout << endl;
    	}
     	return 0;
    }
     