/*Kadane's Algorithm*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
     ll getMaxSub = LLONG_MIN;
     ll checkMaxSub = 0;
     int n;
     cin>>n;
     ll x[n];
     for(int i=0;i<n;i++) cin>>x[i];
     for(int i=0;i<n;i++)
     {
        checkMaxSub+=x[i];
        if(getMaxSub<checkMaxSub)
        getMaxSub = checkMaxSub;
        if(checkMaxSub<0)
        checkMaxSub = 0;
     }
     cout<<getMaxSub;
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
