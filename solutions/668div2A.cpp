
#include<bits/stdc++.h>
#include <unordered_map> 
using namespace std;
#define int long long int
#define vi vector<ll>
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
//const int inf = 5 * (1e+8);
const int mod = 1e+9 + 7;
 
void sol()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    reverse(a.rbegin(),a.rend());
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
    cout<<endl;
    
}
int32_t main()
{
	fast;
	cases{
		sol();
	}return 0;
}
