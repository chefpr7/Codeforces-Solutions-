#include<bits/stdc++.h>
using namespace std;
#define inp(k)           ll k;cin>>k;
#define in2(n, k)       ll n, k; cin>>n;cin>>k;
#define ll long long
#define dl double
#define ch char
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=a-1;i>=b;i--)
#define Godspeed                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vpl vector< pair<ll,ll> >
#define vpi vector< pair<int,int> >
#define vi vector<int>
#define vl vector<ll>
#define vdl vector<dl>
#define vch vector<char>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fr first
#define se second
#define PI 3.14159265
bool comp(pair<long long int ,long long int > &a,pair<long long int ,long long int > &b)
{
	return a.second > b.second;
}
#define int long long

//main jadoogar hai mera naam goga

signed main() {
  int n, len;
  cin >> n >> len;
  vector<int> A(2 * n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    A[n + i] = A[i];
  }
  n *= 2;
  
//mujh jaisa nahin koi hoga

  vector<int> B = {0}, C = {0};
  for (int i = 0; i < n; i++) B.push_back(B.back() + A[i]);
  for (int i = 0; i < n; i++) C.push_back(C.back() + (A[i] * (A[i] + 1)) / 2);int ans = 0;
  for (int i = 0; i < n; i++) {if (B[i + 1] >= len) {int z = upper_bound(B.begin(), B.end(), B[i + 1] - len) - B.begin();int cnt = C[i + 1] - C[z];int days = B[i + 1] - B[z];int too = len - days;cnt += ((A[z - 1] * (A[z - 1] + 1)) / 2);cnt -= (((A[z - 1] - too) * (A[z - 1] - too + 1)) / 2);ans = max(ans, cnt);}}
  cout << ans;
}
