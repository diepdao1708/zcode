#include<bits/stdc++.h>
using namespace std;
int n;
string a;
vector<int> f;

void giaiThua(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='2')
        {
            f.push_back(2);
            continue;
        }
        if(s[i]=='3')
        {
            f.push_back(3);
            continue;
        }
        if(s[i]=='4')
        {
            f.push_back(3);
            f.push_back(2);
            f.push_back(2);
            continue;
        }
        if(s[i]=='5')
        {
            f.push_back(5);
            continue;
        }
        if(s[i]=='6')
        {
            f.push_back(5);
            f.push_back(3);
            continue;
        }
        if(s[i]=='7')
        {
            f.push_back(7);
            continue;
        }
        if(s[i]=='8')
        {
            f.push_back(7);
            f.push_back(2);
            f.push_back(2);
            f.push_back(2);
            continue;
        }
        if(s[i]=='9')
        {
            f.push_back(7);
            f.push_back(3);
            f.push_back(3);
            f.push_back(2);
            continue;
        }
    }
}
void Run()
{
    cin>>n>>a;
    f.clear();
    giaiThua(a);
    sort(f.begin(), f.end());
    for(int i=f.size()-1; i>=0; i--)
    {
        cout<<f[i];
    }
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}

