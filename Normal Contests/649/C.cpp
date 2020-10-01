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
// #define ss           size()
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         int T;cin>>T;while(T--)
#define __sort(v)    sort(v.begin(),v.end())
#define __rsort(v)   sort(v.rbegin(),v.rend())
#define setbits(x)   __builtin_popcount(x)
#define zrobits(x)   __builtin_ctzint(x)
const int inf = 5 * (1e+8);
const int mod = 1e+9 + 7;

vector<int> adj[500005];
vector<int> visited(500005, 0);
vector<int> t(500005, 0);
int flag = 1;
#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n,m;
void nothing()
{

}
void solve(){
  cin>>n;
  int a[n];
  int b[n];
  nothing();
  vector<pair<int,int>> v;
  rep(i,0,n){cin>>a[i];b[i]=-1;}
  nothing();
  string s="";
  v.pb({a[0],0});
  if(a[0]!=0)b[0]=0;
  rep(i,1,n){ 
    nothing();
if(a[i]!=a[i-1]){ 
v.pb({a[i],i}); 
b[i]=a[i-1];
}
} 
int spaces=n-(v.size()-1);
int ritwik=0;
int ss=0;
rep(i,1,v.size()){
nothing();
int xx=(v[i].ff-v[i-1].ff)-1;
ss+=xx;
}
if(spaces<ss){
cout<<-1<<endl; }
  else{
    rep(i,1,v.size()){
      int xx=(v[i].ff-v[i-1].ff)-1;
rep(j,0,xx){
int num=v[i-1].ff+j+1;
while(b[ritwik]!=-1){ritwik++;if(ritwik>=n)break;}
if(ritwik>=n)
break;
b[ritwik]=v[i-1].ff+j+1;
      }
    }
    rep(i,0,n){
     if(b[i]==-1)b[i]=1000000;
   }
   nothing();
   rep(i,0,n){
    cout<<b[i]<<" ";
  }
  nothing();
}
}


int32_t main()
{

  fast;
  solve();
  return 0;
} 