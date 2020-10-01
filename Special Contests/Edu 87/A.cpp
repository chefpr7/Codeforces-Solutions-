 #include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll x = a-b;
		ll y = c-d;
		ll ans = b;

		if(y>=1&&x>=1){
			ans=ans+c*(x/y);
			if(x%y!=0)
				ans=ans+c;
			x = 0;
		}
		if(x>0){
			cout<<"-1"<<endl;
		}
		else
		cout<<ans<<endl;
	}
}