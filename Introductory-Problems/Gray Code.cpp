#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<string> getAns(ll n)
{
    if(n<=0)
    {
        return {"0"};
    }
    if(n==1)
    {
        return {"0","1"};
    }
    vector<string> prevRes;
    vector<string> fAns;
    prevRes = getAns(n-1);
    for(int j=0;j<prevRes.size();j++)
    {
        string s = prevRes[j];
        fAns.push_back("0"+s);
    }
    for(int j=prevRes.size()-1;j>=0;j--)
    {
        string s = prevRes[j];
        fAns.push_back("1"+s);
    }
    return fAns;
}
void solve()
{
    ll n;
    cin>>n;
    vector<string> ans;
    ans = getAns(n);
    for(auto x:ans)
    {
        cout<<x<<endl;
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