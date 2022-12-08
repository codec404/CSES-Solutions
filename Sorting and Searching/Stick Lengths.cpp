#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll p[n];
    int c = 0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(p[i]==p[i+1])
        {
            c++;
            break;
        }
    }
    sort(p,p+n);
    ll sumFront = 0, sumBack = 0;
    for(int i=0;i<n/2;i++)
    {
        sumFront+=p[i];
        sumBack+=p[n-i-1];
    }
    ll large = max(sumFront,sumBack);
    ll small = min(sumFront,sumBack);
    if(n&1)
    {
        ll get = p[n/2];
        if(get &1)
        {
            small += get/2 +1;
            large += get/2;
        }
        else
        {
            small += get/2;
            large += get/2;
        }
    }
    if(n==1)
    {
        cout<<0;
        return;
    }
    if(c>0)
    cout<<large - small;
    else{
        if(n&1)
        cout<<large - small +1;
        else
        cout<<large-small;
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
