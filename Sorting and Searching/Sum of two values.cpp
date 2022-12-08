#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    unordered_map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        if(m.count(x-v[i]))
        {
            if(m[x-v[i]]!=i+1)
            {
                cout<<i+1<<" "<<m[x-v[i]];
                return;
            }
        }
    }
    cout<<"IMPOSSIBLE";
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
