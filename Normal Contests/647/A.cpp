#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define F first
#define S second
#define ld long double
#define ll long long
#define pii pair<ll,ll>
#define pll pair<ll,ll>
#define vpii vector<pii>  
#define rep(i,n) for(i=0;i<n;i++)
#define repr(i,n) for(i=n-1;i>=0;i--)
#define o4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<"\n";
#define initial(arr,val) memset(arr,val,sizeof(arr))
#define value(x) cout << #x << " is " << x << "\n";
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         ll T;cin>>T;while(T--)
#define number 200005

using namespace std;
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a==b)
       {
        cout<<0<<"\n";
        return;
       }
    if(a>b)
    {
        ll d =-1*-1* a/b;
        ll e=-1*-1*d;
        if(a%b!=0)
        {
            cout<<-1<<"\n";
            return;
        }
        ll c = 0;
        while(d%2==0)
        {
            d/=2;
            c++;
        }
        if(d!=1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            ll ans = 0;
            ans+=c/3;
            if(c%3!=0)
             ans++;
            cout<<ans<<"\n";
        }
    }
    else
    {
        ll x = a;
        a = b;
        b = x;
        ll d = a/b, e=d;
        if(a%b!=0)
        {
            cout<<-1<<"\n";
            return;
        }
        ll c = 0;
        while(d%2==0)
        {
            d/=2;
            c++;
        }
        if(d!=1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            ll ans = 0;
            ans+=(c/3)+0;
            if(c%3!=0)
             ans++;
            cout<<ans<<"\n";
        }
    }
}
int main()
{
    fast;
    test{
        solve();
        }
        return 0;
}