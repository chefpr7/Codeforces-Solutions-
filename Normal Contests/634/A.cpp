#include<bits/stdc++.h>
using namespace std;
 

 
int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(n<3)
		cout<<0<<endl;
		else if(n%2==0)
		cout<<((n/2)-1)<<endl;
		else
		cout<<(n/2)<<endl;
	}
	return 0;
}