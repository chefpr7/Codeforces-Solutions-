
// Problem : C1. Prefix Flip (Easy Version)
// Contest : Codeforces - Codeforces Round #658 (Div. 2)
// URL : https://codeforces.com/contest/1382/problem/C1
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

void tfm(string& a, int pos){
	for(int i=0; i<=pos; i++){
		if(a[i]=='0')
		   a[i]='1';
		else
		  a[i]='0';
	}
	nothing();
	int x = 0, y = pos;
	while(x<y){
		char temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
	nothing();
}

		void solve()
		{
			int n;
	cin>>n;
	string a, b;
	cin>>a>>b;
	nothing();
	
	vector<int> ans;
	nothing();
	for(int i=n-1; i>=0; i--){
		if(b[i]==a[i]){
			continue;
		}
		else{
			if(b[i]==a[0]){
				ans.pb(1);
				tfm(a, 0);
				ans.pb(i+1);
				tfm(a, i);
			}
			else{
				ans.pb(i+1);
				tfm(a, i);
			}
		}
	}
	nothing();
	cout<<ans.size()<<" ";
	for(auto i:ans)
	  cout<<i<<" ";
	cout<<endl;
	nothing();
	return;
		}
		int32_t main()
		{
			fast;
			test {
				solve();
			}
			return 0;
		}