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
#define rep(i,n) for(i=0;i<n;i++)
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
void solve(){
		
		int n,x;
		cin>>n>>x;
		ll arr[n];
		int i;
		ll even=0,odd=0;
		for(i=0;i<n;i++)
		{
		cin>>arr[i];
		if(arr[i]%2==0)
		even++;
		else
		odd++;
		}
		 for(i=1;i<=x;i+=2)
    	  {
    	  	int p=(x-i);
    	  	  if(odd>=i&&even>=p)
    	  	  {
    	  	  	  cout<<"Yes"<<endl;
    	  	  	  return;
    	  	  }
    	  }
    	  cout<<"No"<<endl;
    	  return;
	}

int main()
{int t;
	cin>>t;
	while(t--){
	solve();}
	return 0;

}