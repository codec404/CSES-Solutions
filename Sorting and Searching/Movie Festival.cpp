#include<bits/stdc++.h>
using namespace std;
bool Compare(pair<long long int,long long int> p1,pair<long long int,long long int> p2)
{
    return p1.first<p2.first;
}
void solve()
{
    long long int n;
    cin>>n;
    long long int count = 1;
    vector<pair<long long int,long long int>> v;
    for(int i=0;i<n;i++)
    {
        long long int start,end;
        cin>>start>>end;
        v.push_back({end,start});//The one that will end first we will take that into consideration
    }
    sort(v.begin(),v.end(),Compare);
    long long int getVal = v[0].first;
    int i;
    for(i=1;i<n;i++)
    {
        if(v[i].second>=getVal)
        {   getVal = v[i].first;
            count+=1;
        }
    }
    cout<<count<<endl;
}
int main()
{
    solve();
    return 0;
}