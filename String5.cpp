#include<bits/stdc++.h>
using namespace std;
vector<int> a, b, dd;
string s;
void Run()
{        
    cin>>s;
	int n=s.length()/2;
	dd.clear();
	dd.resize(1000, 0);
	for(int i=0; i<s.length(); i++)
	{
		dd[s[i]]++;
	}
	int maxx=0;
	for(int i='a'; i<='z'; i++)
	{
		if(dd[i]>n)
		{
		    cout<<"0"<<endl;
		    return;
		}
	}
	cout<<"1";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
	cin.ignore();
    while(T--) Run();
    return 0;
}