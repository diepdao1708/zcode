    #include<bits/stdc++.h>
    using namespace std;
    const long long mod=1e9+7;
    long long n, x;
    vector<long long> a;
    vector<long long> f;
    void pre(long long &n, long long &x)
    {
        f.push_back(1);
        long long tmp=1;
        for(int i=1; i<n; i++)
        {
            tmp=(tmp%mod*x%mod)%mod;
            f.push_back(tmp);
        }

    }
    void solve()
    {
        cin>>n>>x;
        f.clear();
        pre(n, x);
        a.clear();
        a.resize(n);
        for(int i=0; i<n; i++) cin>>a[i];
        int ii=0, jj=n-1;
        long long ans=0;
        //for(int i=0; i<f.size(); i++) cout<<f[i]<<' ';
        while(ii<n&&jj>=0)
        {
            ans=(ans+(a[ii]%mod*f[jj]%mod)%mod)%mod;
            ii++;
            jj--;
        }
        cout<<ans;
        cout<<'\n';
    }
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;
    }
