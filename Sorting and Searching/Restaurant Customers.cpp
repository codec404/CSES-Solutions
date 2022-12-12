#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a[i] = x;
        b[i] = y;
    }
    sort(a,a+n);
    sort(b,b+n);
    int i=0,count = 0,j=0;
    int gtMax = INT_MIN;
    while(i<n)
    {
        if(a[i]<=b[j])
        {
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        gtMax = max(gtMax,count);
    }
    cout<<gtMax;
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
