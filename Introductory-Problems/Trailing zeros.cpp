#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll getFives = log2(n)/log2(5);
    ll res = 0;
    for(int i=1;i<=getFives;i++)
    {
        ll exponent = pow(5,i);
        res += n/exponent;
    }
    cout<<res<<"\n";
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
