#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t,n,i,a[1007];
	cin>>t;
	while(t--)
	{ 
		ll cnt=1;
		cin>>n;
		for(i=1;i<=n;i++){
		cnt=2*cnt;
		a[i]=cnt;}
		ll ans,sum=0;
		ans=a[n];
		for(i=1;i<=n/2-1;i++)
		{
			ans=ans+a[i];
		}
		for(i=n/2;i<=n-1;i++)
		{
			sum=sum+a[i];
		}
		ll k;
		k=abs(ans-sum);
		cout<<k<<endl;
	}
	return 0;
}