#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod  = 1000000007;
void solve()
{
    ll n;
    cin>>n;
    ll result = 1;
    ll i = 0;
    while(i<n)
    {
        result *= 2;
        result %= mod;
        i++;
    }
    cout<<result;
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
