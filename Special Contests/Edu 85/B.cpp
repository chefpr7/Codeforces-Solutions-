#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n, x;
		cin>>n>>x;
		ll a[n], s = 0;
		for(int i = 0;i<n;i++) {
			cin>>a[i];
			s=s+a[i];
		}
		double d= 0.0;
		sort(a, a+n);
		bool p = false;
		for(int i=0;i<n;i++) {
			d = s/(double)(n-i);
			if(d >= x) {
				p = true;
				cout << n-i <<endl;
				break;
			}
			s -= a[i];
		}
		if(p!=true)
			cout <<"0"<<endl;
	}
	return 0;
}