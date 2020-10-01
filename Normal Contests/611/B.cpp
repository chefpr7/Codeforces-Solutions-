#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
#define f(i, a, b) for(ll i=a;i<b;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,full;
		cin>>n>>k;
		full = n - n % k;
		full += min(n % k, k / 2);
		cout<<full<<endl;
	}
	return 0;
}