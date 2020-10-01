
// Problem : B. Array Walk
// Contest : Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1389/problem/B
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
  int n, k, z;
  cin>>n>>k>>z;
  nothing();
  vi a(n);
  rep(i,0,n)
  cin>>a[i];
  nothing(); 
  vi pre(n, 0);
  pre[0] = a[0];
  nothing();
  rep(i,1,n)
  pre[i]=pre[i-1]+a[i];
  nothing();
  int res = 0, sum=a[0];
  nothing();
  rep(i,1,n){
    sum+=a[i];
  nothing();
    if(k-i<0)
       break;
  int rem = k-i, x=1, dz = z, curr=sum, last=0;
  while(dz&&rem){
   if(x&1){
      dz--;
      rem--;
      curr=curr+a[i-1];
 }
 else{
     --rem;
  nothing();
     curr+=a[i];
}
  nothing();
last = x;
x=x^1;
}
if(rem>0){
   if(last==0)
        curr+=pre[min(n-1,i+rem)]-pre[i];
   else
        curr+=pre[min(n-1, i+rem-1)]-pre[i-1];
}
if(curr>res)
{
  res = curr;
     	 	//cout<<i<<" ";
}
}
cout<<res<<endl;

}
int32_t main()
{
  fast;
  test {
      solve();
 }
 return 0;
}