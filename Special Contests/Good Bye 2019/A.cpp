#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
#define f(i, a, b) for(ll i=a;i<b;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k1,k2;
		cin>>n>>k1>>k2;
		ll a[k1],max1=0,b[k2],max2=0;
		f(i,0,k1) cin>>a[i];
		f(i,0,k2) cin>>b[i];
		f(i,0,k1){
			if(a[i]>max1)
				max1=a[i];
		}
		f(i,0,k2){
			if(b[i]>max2)
				max2=b[i];
		}
		if(max1>max2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}