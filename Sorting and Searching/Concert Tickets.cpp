#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,m;
    cin>>n>>m;
    multiset<ll> h;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        h.insert(-a[i]);
    }
    for(ll i=0;i<m;i++)
    {
        ll t;
        cin>>t;
        if(h.lower_bound(-t)==h.end())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<-(*(h.lower_bound(-t)))<<endl;
            h.erase(h.lower_bound(-t));
        }
    }
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
