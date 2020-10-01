#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x;
		cin>>x;
		int y=x%14;
		long long d=x/14;
		// cout<<x<<" "<<y<<endl;
		if(y>=1&&y<=6&&d>=1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}