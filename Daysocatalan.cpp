#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int n;
int maxx=0;
int tst[10005]={};
int tsm[10005]={};
void pre_tu()
{
    for(int i=2; i<=(n*2+2); i++)
    {
        int k=i;
        for(int j=2; j<=sqrt(k); j++)
        {
            if(k%j==0)
            {
                maxx=max(maxx, j);
                int dem=0;
                while(k%j==0)
                {
                    dem++;
                    k/=j;
                }
                tst[j]+=dem;
            }
        }
        if(k!=1) 
        {
            tst[k]++;
            maxx=max(maxx, k);
        }
    }
}
void pre_mau()
{
    for(int i=2; i<=(n+1); i++)
    {
        int k=i;
        for(int j=2; j<=sqrt(k); j++)
        {
            if(k%j==0)
            {
                maxx=max(maxx, j);
                int dem=0;
                while(k%j==0)
                {
                    dem++;
                    k/=j;
                }
                tsm[j]+=dem*2;
            }
        }
        if(k!=1) 
        {
            tsm[k]+=2;
            maxx=max(maxx, k);
        }
    }
    int k=n+2;
    for(int j=2; j<=sqrt(k); j++)
    {
        if(k%j==0)
        {
            maxx=max(maxx, j);
            int dem=0;
            while(k%j==0)
            {
                dem++;
                k/=j;
            }
            tsm[j]+=dem;
        }
    }
    if(k!=1) 
    {
        tsm[k]++;
        maxx=max(maxx, k);
    }
}
void init(int x, vector<int> &v)
{
    v.clear();
	while(x>0)
    {
        v.push_back(x%10);
        x/=10;
    }
    //reverse(v.begin(), v.end());
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
void mul(vector<int> v1, vector<int> v2, vector<int> &v3)
{
	v3.clear();
	for(int i=0; i<v1.size(); i++)
	{
		vector<int> v4;
		int extra=0, tmp;
		for(int j=0; j<v2.size(); j++)
		{
			tmp=v1[i]*v2[j]+extra;
			v4.push_back(tmp%10);
			extra=tmp/10;
		}
		if(extra>0) v4.push_back(extra);
		for(int j=0; j<i; j++)
		{
			v4.insert(v4.begin(), 0);
		}
		add(v3, v4, v3);
	}
} //mul

int Poww(int n, int k)
{
	if(k==0) return 1;
	int x=Poww(n,k/2);
	if(k%2==0) return x * x;
	return n*(x*x);
}

void print(vector<int> v)
{
	for(int i=v.size()-1; i>=0; i--) 
		cout<<v[i];
	cout<<endl;
} //print

void Run()
{
    cin>>n;
    pre_tu();
    pre_mau();
    vector<int> kq;
    init(1, kq);
    for(int i=2; i<=maxx; i++)
    {
        tst[i]=tst[i]-tsm[i];
    }
    // for(int i=2; i<=maxx; i++) 
    // {
    //     cout<<tst[i]<<' ';
    // }

    //cout<<maxx<<' ';
    for(int i=2; i<=maxx; i++)
    {
        if(tst[i]>0)
        {
            vector<int> v;
            init(i, v);
            //cout<<i<<' ';
            //print(v);
            for(int j=0; j<tst[i]; j++)
            {
                mul(v, kq, kq);
            }
            //print(kq);
            //mul(v, kq, kq);
        }
    }
    print(kq);
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}