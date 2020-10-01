#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
const ll INF = 1e18;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;
 
int main()
{

	ios::sync_with_stdio(false);
 
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll> v(n);
		for(ll i=0;i<n;i++)
			cin>>v[i];
 
		vector<ll> p(n, 0);
		for(ll i=1;i<n-1;i++)
			p[i] = (v[i]>v[i-1]) && (v[i]>v[i+1]);
 
		vector<ll> sum(n);
		for(ll i=1;i<n;i++)
			sum[i] += p[i] + sum[i-1];
 
		pair<ll,ll> ans = mp(-1ll,-1ll);
		for(ll i=0;i+k-1<n;i++)
		{
			ll x = sum[i+k-1];
			if(i!=0)
				x -= sum[i-1];
			if(p[i])
				x--;
			if(p[i+k-1])
				x--;
 
			if(ans==mp(-1ll,-1ll) || (x > ans.first))
				ans = mp(x, i);
		}
 
		cout<<ans.first+1<<" "<<ans.second+1<<endl;
	}
 
	return 0;
}