#include<bits/stdc++.h>
using namespace std;
string x, y;
void print(vector<int> v)
{
	for(int i=v.size()-1; i>=0; i--) 
		cout<<v[i];
	cout<<endl;
} //print
void removeZero(vector<int> &v)
{
	while(v[v.size()-1]==0&&v.size()>1)
	{
		v.pop_back();
	}
} //removeZero
void init(string x, vector<int> &v)
{
	for(int i=x.length()-1; i>=0; i--)
	{
		int tmp=x[i]-'0';
		v.push_back(tmp);
	}
	removeZero(v);
} //init
void add(vector<int> v1, vector<int> v2, vector<int> &v3)
{
	v3.clear();
	int length=v1.size()>v2.size() ? v1.size():v2.size();
	v1.resize(length);
	v2.resize(length);
	int extra=0;
	int tmp;
	for(int i=0; i<length; i++)
	{
		tmp=v1[i]+v2[i]+extra;
		v3.push_back(tmp%10);
		extra=tmp/10;
	}
	if(extra>0) v3.push_back(extra);
	
} //add
void Run()
{
	cin>>x>>y;
	vector<int> v1, v2, v3;
	init(x, v1);
	init(y, v2);
	add(v1, v2, v3);
	print(v3);
}
int main()
{
	int T;
	cin>>T;
	while(T--) Run();
	return 0;
}