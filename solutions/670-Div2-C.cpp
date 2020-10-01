#include<bits/stdc++.h>
#include <unordered_map> 
using namespace std;
#define int long long int
#define vi vector<int>
#define pi pair<ll,ll>
#define vp vector<pi>
#define mp map<ll,ll>
#define pb push_back
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define __sort(v)    sort(v.begin(),v.end())
#define __rsort(v)   sort(v.rbegin(),v.rend())
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define setbits(x)   __builtin_popcount(x)
#define zrobits(x)   __builtin_ctzint(x)
#define cases int t;cin>>t;while(t--)
#define PI 3.14159265359
const int inf = 1e+18;
const int mod = 1e+9 + 7;
void nothing()
{
	
}
 
int e=-1,f=-1;
int n;
int depths(int s, vi adj[], vector<int>& Sr, int p=-1){
	int res= 1;
	for(auto i:adj[s]){
		if(i!=p){
			int nodes = depths(i, adj, Sr, s);
			if(nodes==-1)
			   return -1;
			if(n-nodes == nodes){
				e = s;
			     f = i;
			     return -1;
			}
			res+=nodes;
		}
	}
	return res;
}
bool fl;
int g,h;
bool isconnected(int s, int p,  vector<int> adj[]){
	for(auto i:adj[s])
	{
		if(i!=p)
		{
			bool el= isconnected(i, s, adj);
			if(el)
			{
				g = s;
				h = i;
				return 0;
			}
		}
	}
	if(adj[s].size()==1)
	   {return 1;
	   }
}
void sol()
{
	nothing();
    
     cin>>n;
     vector<int> adj[n+1];
     rep(i,0,n-1){
     	int q,r;
     	cin>>q>>r;
     	adj[q].pb(r);
     	adj[r].pb(q);
     }	
     vector<int> Sr(n+1, 0);
     e  = - 1;
     f = -1;
     int z=depths(1, adj, Sr);
     
     if(e==-1&&f==-1)
     {
     	cout<<1<<" "<<adj[1][0]<<endl;
     	cout<<1<<" "<<adj[1][0]<<endl;
     	return;
     }
     fl = 1;
     bool w = isconnected(e, f, adj);
     cout<<g<< " " <<h<<endl;
     cout<<f<<" "<<h<<endl;
     
}
int32_t main()
{
	fast;
	cases{
		sol();
	}return 0;
}
