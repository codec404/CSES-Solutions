    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;

    void solve()
    {
        int n,m;
        cin>>n>>m;
        vector<ll> a(n);
        vector<ll> b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        } 
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        int l = 0;
        for(int i=0;i<m;i++)
        {
            bool f = false;
            if(b[l]>=a[i])
            {
                f = true;
                cout<<a[i]<<endl;
                a.erase(a.begin()+i);
                l++;
                i = 0;
            }
            if(i==m-1 && f== false)
            cout<<-1<<endl;
        } 
    }
    int main()
    {
        solve();
        return 0;
    }