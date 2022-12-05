#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll a[n];
    ll diff, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            diff = a[i] - a[i+1];
            a[i+1] = a[i];
            ans += diff;
        }
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}