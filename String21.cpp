#include<bits/stdc++.h>
using namespace std;

int so(char c)
{
    return c-'0';
}
void Run()
{
    string s;
    cin>>s;
    string s1="";
    int tong=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='0'&&s[i]<='9') tong+=so(s[i]);
        else s1+=s[i];
    }
    sort(s1.begin(), s1.end());
    cout<<s1<<tong;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}

