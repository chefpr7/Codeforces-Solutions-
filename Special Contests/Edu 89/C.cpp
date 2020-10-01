#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int         long long int
#define vi           vector<int>
#define pii          pair<int,int>
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
void solve()
{
    int n,m;
    cin>>n>>m;
        int a[n][m];
        int b[n][m];
        int sum=n+m-1;
        int matrix[sum][2];
        nothing();
        rep(i,0,n+m-1){
            matrix[i][0]=0;
            matrix[i][1]=0;
        }
        nothing();
        rep(i,0,n){
            rep(j,0,m){
                cin>>a[i][j];

            }
        }
        nothing();
        rep(i,0,n){
            rep(j,0,m){
                if(a[i][j])
                    matrix[i+j][0]++;
                else matrix[i+j][1]++;
                
            }
        }
        int k=0;
        nothing();
        if((n+m-1)%2==0){
            rep(i,0,sum){
            int rit=min(matrix[i][0]+matrix[n+m-2-i][0],matrix[i][1]+matrix[n+m-2-i][1]);
            k+=rit;
            }
        }else{
            rep(i,0,sum){
            int rit=min(matrix[i][0]+matrix[n+m-2-i][0],matrix[i][1]+matrix[n+m-2-i][1]);
            k+=rit;
            }
            int p=(sum)/2;
            int rit=min(matrix[p][0]+matrix[n+m-2-p][0],matrix[p][1]+matrix[n+m-2-p][1]);
            k-=rit;
        }
        nothing();
        cout<<k/2<<endl;
}
int32_t main()
{
    fast;
    test {
        solve();
    }
    return 0;
}