
// Problem : A. Common Subsequence
// Contest : Codeforces - Codeforces Round #658 (Div. 2)
// URL : https://codeforces.com/contest/1382/problem/0
// Memory Limit : 256 MB
// Time Limit : 1000 ms
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
const int inf = 5 * (1e+8);
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
			int n, m;
			nothing();
	cin>>n>>m;
     mii ma, mb;
     set<int> s;
     nothing();
     int x;
     rep(i,0,n){
     	
     	cin>>x;
     	ma[x]++;
     	s.insert(x);
     }
     rep(i,0,m){
     	cin>>x;
     	mb[x]++;
     	s.insert(x);
     }
     nothing();
     for(auto i:s){
     	if(ma[i]&&mb[i]){
     		cout<<"YES"<<endl;
     		cout<<1<<" "<<i<<endl;
     		return;
     	}
     }
     nothing();
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