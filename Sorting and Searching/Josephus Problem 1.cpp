#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        v[i] = (i+1);
    }
    while(v.size()!=1)
    {
        vector<ll> store;
        for(int i=0;i<v.size();i++)
        {
            if(i%2==1)
            cout<<v[i]<<" ";
            else
            {
                store.push_back(v[i]);
            }
        }
        if(v.size()&1)
        {
            ll get = store.back();
            store.pop_back();
            v.clear();
            v.push_back(get);
            for(auto x:store)
            {
                v.push_back(x);
            }
        }
        else{
            v = store;
        }
    }
    cout<<v[0];
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
