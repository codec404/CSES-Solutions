#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void TowerOfHanoi(int n,int a,int b,int c)
{
    if(n!=0)
    {
        TowerOfHanoi(n-1,a,c,b);
        cout<<a<<" "<<c<<endl;
        TowerOfHanoi(n-1,b,a,c);
    }
}
void solve()
{
    int n;
    cin>>n;
    cout<<(int)(pow(2,n)-1)<<endl;
    TowerOfHanoi(n,1,2,3);
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
