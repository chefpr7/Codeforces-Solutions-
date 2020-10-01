#include<bits/stdc++.h>
using namespace std;
long long Max(long long a,long long b, long long c)
{
	long long ret = std::max(a,b);
ret = std::max(ret, c);
return ret;
}
long long Min(long long a,long long b, long long c)
{
	long long ret = std::min(a,b);
ret = std::min(ret, c);
return ret;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c,max,min,mid,sum;
		cin>>a>>b>>c;
		max=Max(a,b,c);
		min=Min(a,b,c);
		mid=a+b+c-max-min;
		if(max>=(min+mid))
			sum=min+mid;
		else
			sum=floor((a+b+c)/2);
		cout<<sum<<endl;
	}
	return 0;
}