#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n==2 || n==3)
    cout<<"NO SOLUTION";
    else if(n==4)
    {
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }
    else
    {
        if(n&1)
        {
            ll j = 1;
            ll mid = n/2+1;
            for(ll i=1;i<=n/2;i++)
            {
                cout<<i<<" "<<mid+j<<" ";
                j++;
            }
            cout<<mid;
        }
        else{
            ll mid = n/2;ll j = 1;
            for(ll i=1;i<=n/2;i++)
            {
                cout<<i<<" "<<mid+j<<" ";
                j++;
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}