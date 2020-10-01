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
string ch;
int main()
{
    int t;
    cin>>t;
    int dp[number][3];
    while(t--)
    {
        int i;
        cin>>ch;
        if(ch.size()<3)
        {
            cout<<0<<endl;
            continue;
        }
        dp[0][0]=dp[0][1]=dp[0][2]=-1;
        dp[0][ch[0]-'1']=0;
        for(i=1;ch[i]!=NULL;i++)
        {
            for(int j=0;j<3;j++) 
                dp[i][j]=dp[i-1][j];
            dp[i][ch[i]-49]=i;
        }
        int ans=1<<30;
        for(i=2;ch[i]!=NULL;i++)
        {
            int l = min(min(dp[i][0],dp[i][1]),dp[i][2]);
            if(l==-1) continue;
            if(ans>(i-l+1))
             ans=i-l+1;
        }
        if(ans==(1<<30)) 
            ans=0;
        cout<<ans<<endl;
    }
    return 0;
}