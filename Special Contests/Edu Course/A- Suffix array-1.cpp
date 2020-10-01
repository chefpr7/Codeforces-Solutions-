
// Problem : A. Suffix Array - 1
// Contest : Codeforces - ITMO Academy: pilot course - Suffix Array - Step 1
// URL : https://codeforces.com/edu/course/2/lesson/2/1/practice/contest/269100/problem/A
// Memory Limit : 512 MB
// Time Limit : 0 ms
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
			string s;
			cin>>s;
			s+="$";
			int n=s.size();
			vector<int> p(n), c(n);
			//p will contain the ordering while c will contain their equivalence classes
			vector<pair<char,int>> a(n);
			rep(i,0,n){
				a[i]={s[i],i};
			} 
			sort(a.begin(), a.end());
			rep(i,0,n)
			p[i]=a[i].second;
			c[p[0]]=0;
			rep(i,1,n){
				if(a[i].first==a[i-1].first)
					c[p[i]]=c[p[i-1]];
				else
					c[p[i]]=c[p[i-1]]+1;
			}
			//transitions from k to k+1
			int k=0;
			while((1<<k)<n){
				vector<pair<pair<int,int>, int>> a(n);
				rep(i,0,n)
				a[i]={{c[i],c[(i+(1<<k))%n]},i};
				sort(a.begin(),a.end());
				rep(i,0,n)
					p[i]=a[i].second;
				c[p[0]]=0;
				rep(i,1,n){
					if(a[i].first==a[i-1].first)
						c[p[i]]=c[p[i-1]];
					else
						c[p[i]]=c[p[i-1]]+1;
				}
				k++;
			}
			rep(i,0,n) {
				cout<<p[i]<<" ";
			}
		}
		int32_t main()
		{
			fast;
			solve();
			return 0;
		}