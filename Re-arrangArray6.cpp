#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int t=0; t<T; t++)
	{
		int n;
		cin>>n;
		int a[100005]={};
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<n-1; i++)
		{
			if(a[i]==a[i+1])
			{
				a[i]=a[i]*2;
				a[i+1]=0;
			}
		}
		int d=0;
		for(int i=0; i<n; i++)
		{
			if(a[i]!=0)
			{
				cout<<a[i]<<' ';
				d++;
			}
		}
		for(int i=0; i<n-d; i++)
		{
			cout<<"0"<<' ';
		}
		cout<<endl;
	}

 	return 0;
}
