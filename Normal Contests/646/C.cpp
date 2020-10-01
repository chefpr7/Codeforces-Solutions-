#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define F first
#define S second
#define ld long double
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>  
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define repr(i,n) for(i=n-1;i>=0;i--)
#define o4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl;
#define initial(arr,val) memset(arr,val,sizeof(arr))
#define value(x) cout << #x << " is " << x << endl;
#define number 200005
ll modpow(ll x,ll y,ll p=mod){  
    ll res = 1;    x = x % p;
    if (x == 0) return 0;
    while (y > 0){  
        if (y & 1)  
          res = (res%p*x%p) % p;  
        y = y>>1;
        x = (x*x) % p;  }  
    return res;  }
ll modinv(ll n , ll p=mod){
    return modpow(n,p-2,p);
}
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int i=0;
		map <int,int> m;
		int u,v;
		for(i=0;i<n-1;i++)
		{
			cin>>u>>v;
			m[u]++;
			m[v]++;
		}
		if(n==1)
			cout<<"Ayush"<<endl;
		else{
		if(m[x]==1)
		cout<<"Ayush"<<endl;
		else
		{
			if((n-2)&1)
			cout<<"Ashish"<<endl;
			else
			cout<<"Ayush"<<endl;
		}
	}
		
	}
	return 0;
}