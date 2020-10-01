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
		   string s;
   cin>>s;
   int n = s.size();
   int count[n+1][2];
   for(int i=0;i<n+1;i++)
   	for(int j=0;j<2;j++)
   		count[i][j]=0;
   
   rep(i, 1, n+1)
   {
   	  count[i][0] = count[i][0]+ count[i-1][0];
   	  count[i][1] = count[i][1]+ count[i-1][1];
   	  if(s[i-1]==48)
   	    count[i][0]++;
   	  else
   	     count[i][1]++;
   }	
   int answer = INT_MAX;
   rep(i,0,n)
   {
   	   if(s[i]==48)
   	   {
   	   	   int x = count[i][1]+count[n][0]-count[i+1][0];
   	   	   int y = count[i][1]+count[n][1]-count[i+1][1];
   	   	   answer = min(answer, x);
   	   	   answer = min(answer, y);
   	   }
   	   else
   	   {
   	   	   int x = count[i][0]+count[n][1]-count[i+1][1];
   	   	   int y = count[i][0]+count[n][0]-count[i+1][0];
   	   	   answer = min(answer, x);
   	   	   answer = min(answer, y);
   	   }
   }
   
   cout<<answer<<endl;
	}
	return 0;
}