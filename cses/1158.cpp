// Problem: Book Shop
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1158/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;
//#define int         long long int
#define vi           vector<int>
#define pii          pair<int,int>
#define vpp          vector<pii>
#define mii          map<int,int>
#define pb           push_back
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define ff           first
#define ss           second
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         int T;cin>>T;while(T--)
#define __sort(v)    sort(v.begin(),v.end())
#define __rsort(v)   sort(v.rbegin(),v.rend())
#define setbits(x)   __builtin_popcount(x)
#define zrobits(x)   __builtin_ctzint(x)
#define endl '\n'
#define debug(x)  cerr<<"[ "<<#x<<" : "<<x<<" ]"<<endl
#define debugp(x) cerr<<"[ "<<#x<<".ff : "<<x.first<<", "<<#x<<".ss : "<<x.second<<" ]"<<endl
#define debugs(x) cerr<<"[ "; for(auto i:x) cerr<<i<<" "; cerr<<" ]"<<endl;
#define debugm(x) cerr<<"----------"<<endl; for(auto i:x) cerr<<i.ff<<":"<<i.ss<<endl; cerr<<"----------"; 
#define PI 3.14159265359
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int dxk[]={0,0,1,-1,1,1,-1,-1};
int dyk[]={1,-1,0,0,1,-1,1,-1};
//const int inf = 1e+18;
const int mod = 1e+9 + 7;
int cases = 1;
 
int power(int x, int p, int m){
	int res = 1;
	while(p){
		if(p&1)
		  res=(res*x)%m;
		x = (x*x)%m;
		p/=2;
	}
	return res;
}
 
int inverse_mod(int x, int p, int m){
	// Fermat's little theorem 
	// a^p = a  % p
	// a^(p-1) = a % p 
	// a^(p-2) = (1/a)%p => inverse modulo 
	return power(x, p-2, m);
}

int n, x;
int h[1001], s[1001];

int maxPages(int pos, int amountLeft, vector<vector<int>>& dp){
	if(pos == n)
		return 0;
	if(dp[amountLeft][pos] != -1) return dp[amountLeft][pos];
	if(amountLeft >= h[pos])
		return dp[amountLeft][pos] = max(s[pos] + maxPages(pos+1, amountLeft - h[pos], dp), maxPages(pos+1, amountLeft, dp));
	return dp[amountLeft][pos] = maxPages(pos+1, amountLeft, dp);
}

void solve()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin>>n>>x;
	vector<vector<int>> dp(n+1, vector<int> (x+1, 0));
	
	
	for(int i=0; i<n; ++i)
		cin>>h[i];
	for(int i=0; i<n; ++i)
		cin>>s[i];
	for(int i=n-1; i>=0; --i){
		for(int j=0; j<=x; ++j){
			if(j >= h[i])
				dp[i][j] = max(s[i] + dp[i+1][j-h[i]], dp[i+1][j]);
			else
				dp[i][j] = dp[i+1][j];
		}
	}
	cout<<dp[0][x]<<endl;
	
	//cout<<maxPages(0, x, dp)<<endl;
}
 
int32_t main()
{
 // fast;
 // test{
 // cout<<"Case #"<<cases<<": ";
  solve();
  //++cases;
  //}
  return 0;
}