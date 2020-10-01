#include<bits/stdc++.h>
using namespace std;
#define ll         long long int
#define vi           vector<ll>
#define pii          pair<ll,ll>
#define vpp          vector<pii>
#define mii          map<ll,ll>
#define endl        '\n'


     
// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
    
//     int t;
//     cin>>t;
//     while(t--)
//     {
//     	ll n,a,b,c,d,x,y;
//     	cin>>n>>a>>b>>c>>d;
//     	x=n*(a-b);
//     	y=n*(a+b);
//     	if(y<(c-d)||x>(c+d))
//     	cout<<"No"<<endl;
//     	else
//     	cout<<"Yes"<<endl;
//     }
    
//     return 0;
// }

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

  ll t;
  cin>>t;
  while(t--)
  {

    ll n, k;
    cin >> n >> k;

    map<ll,ll> m;
    vi v;
    ll a[n];
    ll i;
    for(i=0;i<n;i++)
    { 
    	cin >> a[i];
      if (!(m[a[i]])) 
      	v.push_back(a[i]);
      m[a[i]]++;
    }

    if (m.size() > k) 
    	cout << -1 << endl;
    else
    {
for (; v.size() != k;)
      {
        v.push_back(v[0]);
      }

      ll x = 10000 / k;
      cout << x*k << endl;

       while (x--)
      {
       for (auto i : v)
        cout << i << " ";
      }

      cout << endl;

    }


  }




  return 0;
}