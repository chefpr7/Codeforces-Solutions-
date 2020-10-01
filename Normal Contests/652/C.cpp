
#include<bits/stdc++.h>
using namespace std;
#define int         long long int
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

const int inf = 1e+18;
const int mod = 1e+9 + 7;

void solve()
{
	
}

int32_t main()
{
  fast;
  test
  {
    int n,k;
    cin>>n>>k;
    vi a(n),b(k);
     solve();
    rep(i,0,n)  
    cin>>a[i];
     solve();
    rep(j,0,k)  
    cin>>b[j];
     solve();
     __rsort(a);
     __sort(b);
     int ans = 0;
     solve();
     rep(i,0,k){
        ans=ans+(-1*-1*a[i]);
     }
     solve();
     int j=k;
     rep(i,0,k){
        if(b[i]==1){
            ans=ans+a[i];
        }
        else
        {
            ans=ans+a[j+b[i]-2];
            j=j+b[i]-1;
        }
     }
     cout<<ans<<endl;
  }
  return 0;
}