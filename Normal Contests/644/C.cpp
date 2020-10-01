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
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int i;
		for(i=0;i<n;i++)
		cin>>arr[i];
		int flag=0;
		sort(arr,arr+n);
		// sort(a,a+n);
		int odd=0,even=0,diff=0;
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0)
			odd++;
			if(arr[i]%2==0)
			even++;
			if(i<n-1)
				if((arr[i]-arr[i+1])==-1)
					diff++;
		}
 
		odd = odd-diff;
		even= even-diff;
		if((odd%2==0 && even%2==0)||(odd%2!=0&&even%2!=0 && diff>=1))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
 
	}
	return 0;
	}