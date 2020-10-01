#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,i=1,p;
		cin>>a>>b;
		long long sum=a+b;
		long long m=2*max(a,b);
		while(1)
		{
			if(a==b){
			cout<<0<<endl;
			break;}
			p=i*(i+1)/2;
			if((sum+p)%2==0&&(sum+p)>=m){
				cout<<i<<endl;
				break;
			}
			i++;
		}
	}
	return 0;
}