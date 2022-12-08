#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// bool myCompare(pair<char,ll> p1, pair<char,ll> p2)
// {
//     return p1.second> p2.second;
// }

bool even(int n)
{
    bool f = false;
    if(!(n&1))
    f = true;

    return f;
}

void solve()
{
    string s;
    cin>>s;
    ll n = s.length();
    unordered_map<char,ll> m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    ll oddCount = 0;
    char oddChar ;
    for(auto x: m)
    {
        if(x.second & 1)
        {
            oddCount++;
            oddChar = x.first;
        }
    }
    if(oddCount>1 ||(oddCount==1 and even(n)))
    {
        printf("NO SOLUTION");
    }
    else
    {
        string s1="",s2="";
        for(auto x: m)
        {
            string s = "";
            s.append(x.second/2,x.first);
            s1+=s;
            s2 = s+s2;
        }
        if(oddCount == 1)
        {
            cout<<s1+oddChar+s2;
        }
        else{
            cout<<s1+s2;
        }
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
