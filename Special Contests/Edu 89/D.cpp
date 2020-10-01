// C++ program to find prime factorization of a 
// number n in O(Log n) time with precomputation 
// allowed. 
#include "bits/stdc++.h" 
using namespace std; 
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
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
#define MAXN 10000000 
#define ll long long

// stores smallest prime factor for every number 
ll spf[MAXN]; 

// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn) 
void sieve() 
{ 
	spf[1] = 1; 
	for (ll i=2; i<MAXN; i++) 

		// marking smallest prime factor for every 
		// number to be itself. 
		spf[i] = i; 

	// separately marking spf for every even 
	// number as 2 
	for (int i=4; i<MAXN; i+=2) 
		spf[i] = 2; 

	for (int i=3; i*i<MAXN; i++) 
	{ 
		// checking if i is prime 
		if (spf[i] == i) 
		{ 
			// marking SPF for all numbers divisible by i 
			for (int j=i*i; j<MAXN; j+=i) 

				// marking spf[j] if it is not 
				// previously marked 
				if (spf[j]==j) 
					spf[j] = i; 
		} 
	} 
} 

// A O(log n) function returning primefactorization 
// by dividing by smallest prime factor at every step 
set<int> getFactorization(int x) 
{ 
	set<int> ret; 
	while (x != 1) 
	{ 
		ret.insert(spf[x]); 
		x = x / spf[x]; 
	} 
	return ret; 
} 
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	rep(i,0,n){
		cin>>arr[i];
	}
	// cout<<arr[0];
	// sieve();
	vector<int> a(n),b(n);
	rep(i,0,n){
		int x=arr[i]; 
		// cout<<x<<endl;
			// cout << "prime factorization for " << x << " : "; 
				// calling getFactorization function 
	set <int> p = getFactorization(x); 
	
	// for (auto it=p.begin();it!=p.end();it++) 
	// 	cout << *it << " "; 
	// cout << endl; 
	
	if(p.size()==1)
	{a[i]=-1;
	b[i]=-1;
	}
	else
	{
		// a[i]=*(p.begin());
		for (auto it=p.begin();it!=p.end();it++) 
		{
			for(auto it1=p.begin();it1!=p.end();it1++)
			{
				// cout<<*it<<" "<<*it1<<endl;
				
				if(__gcd(*it+*it1, arr[i])==1)
			{
				a[i]=*(it);
				b[i]=*it1;
			break;
			}}
		}
	}
	
	}


rep(i,0,n)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	rep(i,0,n)
	{
		cout<<b[i]<<" ";
		
	}
	cout<<endl;

}
int32_t main()
{
	fast;
		sieve(); 
	solve();

}
// // driver program for above function 
// int main(int argc, char const *argv[]) 
// { 
// 	// precalculating Smallest Prime Factor 
// 	sieve(); 
// 	int x = 23; 
// 	cout << "prime factorization for " << x << " : "; 

// 	// calling getFactorization function 
// 	vector <int> p = getFactorization(x); 

// 	for (int i=0; i<p.size(); i++) 
// 		cout << p[i] << " "; 
// 	cout << endl; 
// 	return 0; 
// } 
