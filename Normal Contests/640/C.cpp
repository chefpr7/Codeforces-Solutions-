#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if((k%(n-1))!=0){
			int x=k/(n-1);
			x=n*x;
			cout<<x+(k%(n-1))<<endl;
		}
		else
		{
			int x=k/(n-1);
			x=n*x;
			cout<<x-1<<endl;
		}
	}
	return 0;
}