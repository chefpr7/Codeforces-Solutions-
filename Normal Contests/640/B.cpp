#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,i;
		cin>>n>>k;
		if(n%2!=0){
			if((n-k+1)%2!=0&&((n-k+1)>0)){
				cout<<"YES"<<endl;
			cout<<n-k+1<<" ";
			i=1;
			while(i!=k){
				cout<<1<<" ";
				i++;
			}
			cout<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
		else{
			if((n-2*k+2)%2==0&&((n-2*k+2)>0)){
				cout<<"YES"<<endl;
			cout<<n-2*k+2<<" ";
			i=1;
			while(i!=k){
				cout<<2<<" ";
				i++;
			}
			cout<<endl;
			}
			else if((n-k+1)%2!=0&&((n-k+1)>0)){
				cout<<"YES"<<endl;
			cout<<n-k+1<<" ";
			i=1;
			while(i!=k){
				cout<<1<<" ";
				i++;
			}
			cout<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
	}
	return 0;
}