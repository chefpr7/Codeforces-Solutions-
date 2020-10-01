#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll soln[2000005];
 
int main()
{
	ll t; 
	cin>>t;
	while (t--) 
	{
		ll n,p,k,i;
		cin>>n>>p>>k;
		for(i= 0;i<n;++i)
			cin>>soln[i];
		sort(soln,soln+n);
		if(k>2&&soln[k-1]>p){
		cout<<1<<endl;
		continue;
		}
		else{
		for(i=0;i<n;++i)
		{
			if (i >= k) 
				soln[i] =soln[i]+soln[i - k];
			if (soln[i] > p) 
				break;
		}
		cout<<i<<endl;
	}
	}
	return 0;
}
