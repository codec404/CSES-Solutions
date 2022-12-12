#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod =  1000000007;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n+1);
    v[1]=0;
    for(int i=2;i<=n;i++)
    {
        v[i] = (i*v[i-1]+((i%2)?-1:1))%mod;
    }
    cout<<v[n];
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
