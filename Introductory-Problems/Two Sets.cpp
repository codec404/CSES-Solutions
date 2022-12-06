#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 1; i <= (n / 2); i += 2)
        {
            cout << i << " " << (n - i) + 1 << " ";
        }
        cout << "\n";
        cout << n / 2 << endl;
        for (int i = 2; i <= n / 2; i += 2)
        {
            cout << i << " " << (n - i) + 1 << " ";
        }
    }
    else if (n % 4 == 3)
    {
        cout << "YES" << endl;
        cout << n / 2 + 1 << endl; // Numner of odds will be greater as compared to evens
        for (int i = 1; i <= (n / 2); i += 2)
        {
            cout << i << " " << (n - i) << " ";
        }
        cout << "\n";
        cout << (n / 2) << endl;
        for (int i = 2; i <= n / 2; i += 2)
        {
            cout << i << " " << (n - i) << " ";
        }
        cout<<n;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}