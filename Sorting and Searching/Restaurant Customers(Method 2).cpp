#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int enter,leave;
        cin>>enter>>leave;
        v.push_back({enter,1});
        v.push_back({leave,-1});
    }   
    int getMax=INT_MIN,count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        count+=v[i].second;
        getMax = max(count,getMax);
    }
    cout<<getMax<<endl;
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
