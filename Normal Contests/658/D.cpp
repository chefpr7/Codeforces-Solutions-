#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define ll          long long
#define pb          push_back
#define eb 			emplace_back
#define mp 			make_pair
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define all(a)      (a).begin(),(a).end()
#define fi          first
#define si          second
#define sz(x)       (ll)x.size()
#define endl        '\n'
#define checkbit(n, b) ((n >> b) & 1)
#define mod        1000000007
#define inf        1000000000000000000
#define puts(n)		cout<<n;
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define setbits(x) __builtin_popcount(x)
#define mset(m,v) memset(m,v,sizeof(m))
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll p[2*n];
		for(ll i=0;i<2*n;i++){
			cin>>p[i];
		}
		ll maxx=0;
		vi pos;
		for(ll i=0;i<2*n;i++){
			if(p[i]>maxx){
				maxx=p[i];
				pos.pb(i);
			}
		}
		pos.pb(2*n);
		vi len;
		for(ll i=1;i<pos.size();i++){
			len.pb(pos[i]-pos[i-1]);
		}
		ll m=len.size();
		bool dp[m+1][n+1]={};
		dp[0][0]=true;
		for(ll i=1;i<=m;i++){
			ll val = len[i-1];
			for(ll j=0;j<=n;j++){
				dp[i][j] = dp[i-1][j];
				if(j-val>=0) dp[i][j] |= dp[i-1][j-val];
			}
		}
		if(dp[m][n]) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
	
	return 0;
}
