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
		int hr,min;
		cin>>hr>>min;
		int time=60*hr+min;
		int result=1440-time;
		cout<<result<<endl;
	}
	return 0;
}