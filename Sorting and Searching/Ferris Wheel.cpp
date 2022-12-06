/*Logic: We are using the two pointer method to check whether the sum of the digits from the first and last is less than equal to the desired weight or not.*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> p(n);
    ll result = 0;
    for(int i=0;i<p.size();i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int startCount = 0;
    for(int i=p.size()-1;i>=startCount;i--)
    {
        if(p[i]+p[startCount]<=x) startCount+=1;
        result++;
    }
    cout<<result<<endl;
}
int main(){
    solve();
    return 0;
}