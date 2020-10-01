#include<bits/stdc++.h>
using namespace std;
// #define int         long long int
#define vi           vector<int>
#define pii          pair<int,int>
#define vpp          vector<pii>
#define mii          map<int,int>
#define pb           push_back
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define ff           first
#define ss           second
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define cases         int T;cin>>T;while(T--)
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
bool MAX[1001][1001];

void solve()
{
	string s;
	cin>>s;
	
	int freq[2]={0,0};
	for(int i=0;i<s.size();i++)
	{
		freq[s[i]-'0']++;
	}
	int mini=min(freq[0],freq[1]);
	if(mini%2)
	{
		cout<<"DA"<<endl;
	}
	else
	cout<<"NET"<<endl;
}
int main()
{ 
  fast;
  cases
  solve();
  return 0;
}
