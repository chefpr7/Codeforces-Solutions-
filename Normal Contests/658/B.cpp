
// Problem : B. Sequential Nim
// Contest : Codeforces - Codeforces Round #658 (Div. 2)
// URL : https://codeforces.com/contest/1382/problem/B
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
#define ans1 cout<<"First"<<endl; return;
#define ans2 cout<<"Second"<<endl; return;
void nothing()
{

}



		void solve()
		{
			int n;
			cin>>n;
			int arr[n];
			rep(i,0,n)
			cin>>arr[i];
			if(n==1)
			{ans1}
			else if(arr[0]>1)
			{ans1}
			else{
				int k=0;
				int f=0;
				rep(i,0,n){
					if(arr[i]==1)
					k++;
					else
					{f=1;break;}
				}
				// cout<<k<<endl;
				if(k%2&&f==1)
				{ans2}
				else if(k%2&&f==0)
				{ans1}
				else if(f==1)
				{
					ans1
				}
				else
				{
					ans2
				}
			}
		}
		int32_t main()
		{
			fast;
			test {
				solve();
			}
			return 0;
		}