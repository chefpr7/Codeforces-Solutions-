#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll T;
	cin>>T;
	while (T--){
		 ll n,l,r;
		cin>>n>>l>>r;
		if(l>=n*(n-1)) cout<<1<<"\n";
		else{
			ll total=2*n-2;
			ll x=1;
			while (l>total){
				x++;
				total+=2*(n-x);
			}
			total-=2*(n-x);
			vector <ll> ans;
			ll prev,next;
			if((l-total)%2==0){
				ans.push_back(x+(l-total)/2);
				if(x+(l-total)/2!=n){
					prev=x;
					next=x+(l-total)/2+1;
				}
				else{
					prev=x+1;
					next=x+2;
				}
			}
			else{
				prev=x;
				next=x+(l-total)/2+1;
			}
			while (ans.size()<r-l+1){
				ans.push_back(prev);
				ans.push_back(next);
				if(next==n){
					if(prev==n-1){
						prev=1;
					}
					else{
						prev++;
						next=prev+1;
					}
				}
				else{
					next++;
				}
			}
			for (ll i=0;i<r-l+1;i++)
				cout<<ans[i]<<" ";
			cout<<endl;     
		}
	}
	return 0;
}