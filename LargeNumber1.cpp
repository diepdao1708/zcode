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
		string a,b;
		cin>>a>>b;
		if(a.length() < b.length() )
		{
			if(a.length() < b.length() )
			{
				string c=a;
				a=b;
				b=c;
			}
		}
		int n = a.length() - b.length();
		for(int i = 0; i < n; i++)
		{
			b='0'+b;
		}
		string s = "";
		int ktra=0;
		if(a.length() == b.length())
		{
			for(int i = 0; i < a.length(); i++)
			{
				if(a[i]<b[i])
				{
					string c = a;
					a=b;
					b=c;
				}
				break;
			}
		}
		int d = 0;
		for(int i = a.length() - 1; i>=0; i--)
		{
			char c;
			if(a[i]>= b[i])
			{
				c = a[i] - b[i] + '0' - d;
				if(c>='0')
				{
					s=c+s;
					d=0;
				}
				else 
				{
					s='9'+s;
					d=1;
				}
			}
			else
			{
				c = a[i] - b[i] + 10 +'0'-d;
				s=c+s;
				d=1;
			}
		}
	//	if(s[0]=='0') s.erase(0,1);
		cout<<s<<endl;
	}
 	return 0;
}