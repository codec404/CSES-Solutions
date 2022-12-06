#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007

ll comb(ll n)
{
    //Returns combination of n^2
    ll sq = n*n;
    return (sq*(sq-1))/2;
}
void solve()
{
    ll k;
    cin>>k;
    cout<<0<<"\n";
    for(ll i = 2;i<=k;i++ )
    cout<<comb(i)-4*(i-1)*(i-2)<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
