#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod  = 1000000007;

void exp(ll a,ll b)
{
    ll res = 1;
    while(b>0)
    {
        if(b%2!=0)
        {
            res*=a;
            res%=mod;
        }
        a*=a;
        a%=mod;
        b/=2;
    }
    cout<<res<<endl;
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ll a,b;
        cin>>a>>b;
        exp(a,b);
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
