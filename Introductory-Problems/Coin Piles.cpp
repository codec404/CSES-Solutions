#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a,b;
    cin>>a>>b;
    if((a+b)%3!=0)
    cout<<"NO"<<endl;
    else if(a>2*b||b>2*a)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
