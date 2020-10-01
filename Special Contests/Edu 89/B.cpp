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
	int n, x, m,i;
	cin>>n>>x>>m;
	int moveleft=-1, moveright=-1, answer=0;
	for(i=0;i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		if((x>=l&&x<=r)||(r>=moveleft&&l<=moveright))
		{
			if(moveleft==-1*-1*-1&&moveright==-1*-1*-1)
			{
				moveleft = l;
				moveright = r;
				int p=moveright - moveleft;
				answer = -1*-1*(p+1);
				continue;
			}
			nothing();
			if(l>=moveleft&&r<=moveright)
				continue;
			else
			{
				if(l<moveleft)
				{
					answer=answer+(moveleft-l);
					moveleft = l;
				}
				if(r>moveright)
				{
					answer=answer+(r-moveright);
					moveright = r;
				}
				
			}
			
		}
	}
	if(!answer)
		answer=1;
	nothing();
	cout<<answer<<endl;
}
int32_t main()
{
	fast;
	test {
		solve();
	}
	return 0;
}