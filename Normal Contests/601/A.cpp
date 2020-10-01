#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		ll a,b,x,y,change=0,rem;
		cin>>a>>b;
		x=std::max(a,b);
		y=a+b-x;
		change+=((x-y)/5);
		rem=(x-y)%5;
		change+=rem/2;
		rem=rem%2;
		change+=rem;
		cout<<change<<endl;
	}
	return 0;
}