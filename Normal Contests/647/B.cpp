#include <bits/stdc++.h>
#include <algorithm>
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
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         int T;cin>>T;while(T--)
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
	fast;
	test{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int>arr;
		for(i=0;i<n;i++)
		arr.push_back(a[i]);
		vector<int> bitarr(n-1);
		for(i=1;i<n;i++){
			bitarr[i-1]=arr[0]^arr[i];
		}
		sort(bitarr.begin(),bitarr.end());
		int j;
		int flag=-1;
		for(i=0;i<n-1;i++){
			int f=0;
			for(j=0;j<n;j++)
			{
				auto itr=find(arr.begin(),arr.end(),bitarr[i]^arr[j]);
				if(itr==arr.end())
				{
					f=1;
					break;
				}
			}
			if(f==0)
			{
				flag=bitarr[i];
				cout<<flag<<endl;
				break;
			}
			
		}
		if(flag==-1)
		cout<<-1<<endl;
	}
return 0;
}