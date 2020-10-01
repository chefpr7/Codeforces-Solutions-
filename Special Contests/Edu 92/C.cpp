
// Problem : C. Good String
// Contest : Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1389/problem/C
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
     set<char> dig;
     nothing();
     string s;
     nothing();
     cin>>s;
     map<char, int> mp;
     nothing();
     rep(i,0,s.size()){
          mp[s[i]]++;
        dig.insert(s[i]);
   }
   int ans = inf;
   nothing();
   for(auto i:mp)
       ans = min(ans, (int)s.size()-i.second);
  nothing();
  for(auto i:dig)
  {
    for(auto j:dig){
     nothing();

     int cnt = 0;
     char find = i;
     for(int k=0; k<s.size(); ++k){
          if(s[k]==find){
               if(find==i)
                   find = j;
              else
              {
               ++cnt;
               find = i;
          }
     }

     nothing();
}
ans = min(ans, (int)s.size()-cnt*2);
// return;
}
}

cout<<ans<<endl;
}
int32_t main()
{
     fast;
     test {
          solve();
     }
     return 0;
}