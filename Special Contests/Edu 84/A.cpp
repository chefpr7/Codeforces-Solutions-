#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(n%2==0&&k%2!=0)
		cout<<"NO"<<endl;
		else if(n%2!=0&&k%2==0)
		cout<<"NO"<<endl;
		else if(k*k>n)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
}