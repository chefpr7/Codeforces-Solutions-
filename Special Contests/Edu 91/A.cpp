
// Problem : Three Indices
// Contest : Codeforces
// URL : https://m1.codeforces.com/contest/1380/problem/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int         long long int
#define vi           vector<int>
#define pii          pair<int,int>
#define vpp          vector<pii>
#define mii          map<int,int>
#define pb           push_back
#define endl        '\n'
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define ff           first
#define ss           second
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         int T;cin>>T;while(T--)
#define __sort(v)    sort(v.begin(),v.end())
#define __rsort(v)   sort(v.rbegin(),v.rend())
#define setbits(x)   __builtin_popcount(x)
#define zrobits(x)   __builtin_ctzint(x)
const int inf = 1e+18;
const int mod = 1e+9 + 7;
#define ll long long
vector<int> adj[500005];
vector<int> visited(500005, 0);
vector<int> t(500005, 0);
int flag = 1;
void nothing()
{

}



		void solve()
		{
			int n;
	cin>>n;
	int a[n];
	rep(i,0,n)
	  cin>>a[i];
	
	//int m1 = inf, m2 = inf;
	vi pre(n, inf), suff(n, inf);
	rep(i, 1, n){
		pre[i] = min(pre[i-1], a[i-1]);
	}
	for(int i=n-2; i>=0; i--){
		suff[i] = min(suff[i+1], a[i+1]);
	}
	
	rep(i, 1, n-1){
		if(a[i]>pre[i]&&a[i]>suff[i]){
			cout<<"YES"<<endl;
			int l, r;
			for(int j=0; j<i; ++j){
				if(a[j]==pre[i]){
					l = j+1;
					break;
				}
			}
			for(int j=i+1; j<n; ++j){
				if(a[j]==suff[i]){
					r = j+1;
					break;
				}
			}
			cout<<l<< " " << i+1 << " " <<r<<endl;
			return;
		}
	}
     cout<<"NO"<<endl;	
		}
		int32_t main()
		{
			fast;
			test {
				solve();
			}
			return 0;
		}