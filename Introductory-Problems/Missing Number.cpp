#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int sum = 0;
	long long int a[n];
	for(int i=0;i<n-1;i++){
		cin>>a[i];
		sum+=a[i];
	}
	long long int get = 0;
	for(int i=1;i<=n;i++)
		get+=i;
	cout<<get - sum;
	return 0;
}