#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll k[n];
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    multiset<ll> s;
    multiset<ll> :: iterator it;
    for(int i=0;i<n;i++)
    {
        it = s.upper_bound(k[i]);
        if(it != s.end())
        s.erase(it);
        s.insert(k[i]);
    }
    cout<<(int)s.size()<<endl;
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
