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
        cin>>v[i];
    }
    set<ll> s;
    ll cons = LLONG_MIN;
    int i=0,j=0;
    while(i<n && j<n)
    {
        while(j<n && !s.count(v[j]))
        {
            s.insert(v[j]);
            ll getDiff = j-i+1;
            cons = max(cons,getDiff);
            j++;
        }
        while(j<n && s.count(v[j]))
        {
            s.erase(v[i]);
            i++;
        }
    }
    cout<<cons;
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
