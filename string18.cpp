#include<iostream>
#include<string>
#include<vector>
using namespace std;
int ans = 0;
string s;
void stringRemove()
{
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0')
		{
			ans += 3;
			s.erase(i, 3);
			stringRemove();
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--) 
	{
		ans = 0;
		cin >> s;
		stringRemove();
		cout << ans << endl;
	}
	return 0;
}