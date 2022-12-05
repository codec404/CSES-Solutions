#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long int ans;
	long long int count = 1;
	if(s.length()==1)
		cout<<1;
	else{
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
			count++;
		else
		{
			if(count>ans)
				ans = count;
			count=1;
		}
		if(count>ans)
			ans = count;
		if(count==s.length())
			ans = count;
	}
	cout<<ans;
}
	return 0;
}