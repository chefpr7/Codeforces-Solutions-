#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(false); 
cin.tie(0); 
cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll>a(n), b(n);
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i] >> b[i];
        }
        ll ans = 9e17, cur = 0;
        for (int i = 0; i < n; ++i) {
            int nxt = (i + 1);
            if (nxt >= n)
                nxt = 0;
            sum += max(0ll, a[nxt] - b[i]);
        }
        for (int i = 0; i < n; ++i) {
            cur = sum + a[i]- max(a[i] - b[i], 0ll) ;
            ans = min(ans, cur);
        }
        cout<<ans<<endl;
    }
 
    return 0;
 
}