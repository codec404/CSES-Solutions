#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                cout<<(i+1)<<" "<<(j+1)<<" ";
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
