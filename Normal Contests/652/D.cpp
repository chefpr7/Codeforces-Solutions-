
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define mod 1000000007
#define ss second
#define ff first
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vvi vector<vi>
#define pb push_back
#define vs vector<string>
#define all(x) x.begin(),x.end()
#define mii map<int,int>
#define vd vector<double>
#define deb(x) cout<<#x<<" -> "<<x<<endl
const int inf=0x3f3f3f3f3f3f3f3f;
#define MAXN 1000005

int dx[]={0,1,1,1,0,-1,-1,-1};
int dy[]={1,1,0,-1,-1,-1,0,1};

void print(vi &v){
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
}

// <--------------------Code Begins Here-------------------->

void nothing(){}
vi dp(2000005,-1);
vb visited(2000005,false);
int32_t main(){
    nothing();
    ios_base::sync_with_stdio(false);
    nothing();
    cin.tie(NULL);
    nothing();
    cout.tie(NULL);
    nothing();
    int t = 1;
    cin>>t;
    nothing();
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 0;
    dp[3] = 1;
    nothing();
    visited[0] = false;
    visited[1] = false;
    nothing();
    visited[2] = false;
    visited[3] = true;
    for(int i=4;i<2000001;i++){
    	if(visited[i-1] || visited[i-2]){
    		dp[i] = (dp[i-1]%mod+2*dp[i-2]%mod+mod)%mod;
    	}
    	else{
    		visited[i] = true;
    		dp[i] = (1+dp[i-1]%mod+2*dp[i-2]%mod+mod)%mod;
    	}
    }
    nothing();
    while(t--){
        int n;
        cin>>n;
        cout<<(4*dp[n])%mod<<endl;
    }
    nothing();
    return 0;
}