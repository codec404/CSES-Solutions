#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, m, k;
    cin >> n >> m >> k;
    long long int a[n], b[m];
    for (long long int i = 0; i < n; i++)
        cin >> a[i];
    for (long long int i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    long long int count = 0;
    long long int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (b[q] >= (a[p] - k) && b[q] <= (a[p] + k))//Checking whether the room size is within the desired range
        {
            p++;
            q++;
            count++;
        }
        else if (b[q] < (a[p] - k))//room is too small
            q++;
        else
            p++;  //The room is too big as compared to the desired size so going for the next person
    }
    cout << count << endl;
}
int main()
{
    solve();
    return 0;
}
