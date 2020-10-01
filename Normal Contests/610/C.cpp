#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
int main() {
	ll m,n,t,e,h,c,i,j,max,sum;
	cin>>m;
	while(m--)
	{
		cin>>n>>t>>e>>h;
		ll a[n],b[n];
		for(i=0;i<n;i++)
		cin >>a[i];
		for(i=0;i<n;i++)
		cin >>b[i];
		vector <pair<ll,ll>>v;
		for(i=0;i<n;i++)
		v.pb(mp(b[i],a[i]));
		sort(v.begin(),v.end());
		max=0;
		sum=0;
		c=0;
		if(v[0].second==1)
		{
			// for(i=0;i<n;i++)
 
		     if(sum>=v[0].first)
		       break;
		       {
		       	if(v[i].second==0)
		     {
		     	sum+=e;
		     	max++;
		     	c++;
		     }
 
		  }  
		  }
 
		for(i=0;i<n;i++)
		{
			if(v[i].second==0)
			  {  if(!c)
			  	sum+=e;
			  	if(c>0)
			  	c--;
 
			  }
			  else 
			  {
 
			  	sum+=h;
 
			  }
			  if(!c&&i<n-1&&sum<v[i+1].first)
			  {
			  	max=i+1;
			  }
 
		}
		if(sum<=t)
		max=n;
 
		cout <<max<<endl;
 
	}
	return 0;
}