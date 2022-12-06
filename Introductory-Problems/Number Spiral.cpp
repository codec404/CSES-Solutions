#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll x,y;
    cin>>x>>y;
    ll getMax = max(x,y);
    ll diff,ans;
    if(x==y)
    {
        ans = (x*(x-1))+1;
    }
    if(getMax&1)
    {
        ll store = (getMax*(getMax-1))+1;
        if(x<y)
        {
            diff = y-x;
            ans = store+diff;
        }
        else{
            diff = x-y;
            ans = store-diff;
        }
    }
    else{
        ll store = (getMax*(getMax-1))+1;
        if(x<y)
        {
            diff = y-x;
            ans = store-diff;
        }
        else{
            diff = x-y;
            ans = store+diff;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}