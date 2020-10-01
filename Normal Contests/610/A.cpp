#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll overlap(ll a, ll b, ll c, ll d)
{
	ll start=std::max(a,c);
	// cout<<start<<endl;
	ll end=std::min(b,d);
	// cout<<end<<endl;
	ll x=end-start;
	// cout<<x<<endl;
	if(x<0)
		return 0;
	else
		return x;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,p,r,a,b;
		cin>>x>>y>>p>>r;
		ll c=p-r;
		ll d=p+r;
		if(x<=y){
			a=x;
			b=y;
		}
		else{
			
			b=x;
			a=y;
		
		}
		ll over=overlap(a,b,c,d);
		// cout<<over<<endl;
		ll result=(b-a)-over;
		cout<<result<<endl;
	}
	return 0;
}