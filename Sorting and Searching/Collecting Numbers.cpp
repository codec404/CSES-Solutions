#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n+1);
    vector<ll> position(n+1);
    ll count = 1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        position[a[i]] = i;
    }
    for(int i=2;i<=n;i++)
    {
        if(position[i]<position[i-1])
        count++;
    }
    
    cout<<count;
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
