#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)

#define pds(x) printf("%d ",x)
#define pdn(x) printf("%d\n",x)
#define pllds(x) printf("%lld ",x)
#define plldn(x) printf("%lld\n",x)
#define pfs(x) printf("%f ",x)
#define pfn(x) printf("%f\n",x)
#define plfs(x) printf("%lf ",x)
#define plfn(x) printf("%lf\n",x)
#define pn printf("\n")

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pipii pair<int,pair<int,int> >

#define vi           vector<int>
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
void nothing()
{

}
const double pi=2*acos(0.0);
void solve(){
    int n;
    sd(n);
    vector<int> a(n);
    vector<int> b(n);
    map<int,int> mpa;
    map<int,int> mpb;
    nothing();

    for(int i=0;i<n;i++)
    {
        sd(a[i]);
        mpa[a[i]]=i;
    nothing();
    }
    for(int i=0;i<n;i++)
    {
        sd(b[i]);
        mpb[b[i]]=i;
    nothing();
    }
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int j=mpb[a[i]];
        if(j>i)
            mp[i+n-j]++;
        else
            mp[i-j]++;
    nothing();
    }
    map<int,int> :: iterator it;
    int maxi=0;
    for(auto it: mp)
    {
        maxi=max(maxi,it.ss);
    }
    pdn(maxi);
}

int main()
{
    fast;
    solve();
    return 0;
}
