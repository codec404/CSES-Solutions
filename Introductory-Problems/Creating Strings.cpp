#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    vector<string> v;
    sort(s.begin(),s.end());
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
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
