#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
typedef long double Lf;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define fastIO  std::ios::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define N 2005
#define NN 2005
#define SZ(x) ((lli) (x).size())
#define loop(i,s,n) for(int i=(s);i<(n);i++)
#define loopr(i,n,s) for(int i=(n)-1;i>=(s);i--)
#define pb push_back
#define o2(a,b) cout<<(a)<<" "<<(b)<<endl
#define o3(a,b,c) cout<<(a)<<" "<<(b)<<" "<<(c)<<endl
#define o4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define cl cout<<endl
#define r0 return 0
#define e0 exit(0)
#define x first
#define y second



string s[N];
string arr[] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
vector<string> ans;
int dp[N][N];
int n,k;
bool f(int pos, int tk){
    if(pos==n) return tk==0;
    if(dp[pos][tk]!=-1) return dp[pos][tk];
    bool res=0;
    loopr(i,10,0){
        int cost=0;
        loop(j,0,7){
        if((s[pos][j]!=arr[i][j])&&arr[i][j]=='1') cost++;
        if((s[pos][j]!=arr[i][j])&&arr[i][j]=='0') return dp[pos][tk]=0;}
        if(tk>=cost) {
            if(f(pos+1,tk-cost)) {
            	res=1; 
            	ans.pb(to_string(i)); 
            	return dp[pos][tk]=1;}
        }
    }
    return dp[pos][tk]=0;
}
int main(){
    ios::sync_with_stdio(false);
    int rits=1;
    loop(rits2,1,rits+1){

        cin>>n>>k;
        char x;
        memset(dp,-1,sizeof(dp));
        loop(i,0,n){
            cin>>s[i];
        }

        if(f(0,k)){
            loopr(i,n,0) cout<<ans[i];cl;
        }
        else cout<<-1<<endl;

    }
    return 0;
}
