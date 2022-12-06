#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    /*Using Brute Force as n=20 and 2^20 is within time limit 1 second*/
    /*For a number in the given array there is two posibilties that is to go to group A or group B. So we consider B as 1 in binary and A as 0 in binary.
    So,total number of ways = 2^n
    So the maximum difference that can be will be equal to the sum of the elements i.e., when i=0 in the loop
    So we check the minimum difference in order.*/
    int n;
    cin>>n;
    ll p[n];
    for(int i=0;i<n;i++)
    {    
        cin>>p[i];
    }
    ll sumA,sumB;
    ll ans = LLONG_MAX;
   for(int i=0;i<1<<n;i++)
   {
    sumA=0,sumB=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            sumB+=p[j];
            else
            sumA+=p[j];
        }
    ans = min(ans,abs(sumA-sumB));
   }
   cout<<ans;
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
