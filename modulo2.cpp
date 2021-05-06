#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int a,m;
		cin>>a>>m;
		int c=-1;
		for(int i = 0; i < m;i++)
		{
			if((a*i)%m==1)
			{
				c=i;
				break;
			}
		}
		cout << c<<endl;
	}
 
 	return 0;
}