#include<bits/stdc++.h>
using namespace std;

void Run()
{
    string s;
	cin>>s;
    if(s.length()<2)
    {
        cout<<"-1"<<endl;
        return;
    }
	vector<int> a;
	for(int i=0; i<s.length(); i++)
	{
		a.push_back(s[i]-'0');
	}
	int ii=(int)a.size()-2;
	while(ii>=0&&a[ii]<=a[ii+1]) ii--;
    if(ii<0)
    {
        cout<<"-1"<<endl;
        return;
    }
	int maxx=0, vt=ii+1;
	for(int i=ii+1; i<a.size(); i++)
    {
        if(a[i]>maxx&&a[i]<a[ii])
        {
            maxx=a[i];
            vt=i;
        }
    }
    swap(a[ii], a[vt]);
    if(a[0]==0)
    {
        cout<<"-1"<<endl;
        return;
    }
	for(int i=0; i<a.size(); i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--) Run();
	return 0;
}