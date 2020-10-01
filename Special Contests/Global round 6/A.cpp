#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sum(string str){
	int x=str.size();
	int s=0;
	for(int i=0;i<x;i++)
	{
		s+=(int(str[i]))-48;

	}
	return s;
}
int zero(string str){
	int x=str.size();
	int ctr=0;
	for(int i=0;i<x;i++)
	{
		if(str[i]=='0')
			ctr++;

	}
	if(ctr>=1)
		return 1;
	else
		return 0;
}
int dig(string str){
	int x=str.size();
	int ctr=0;
	for(int i=0;i<x;i++)
	{
		if(str[i]=='0'||str[i]=='2'||str[i]=='4'||str[i]=='6'||str[i]=='8')
			ctr++;

	}
	if(ctr>=2)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string str;
		cin>>str;
		// cout<<sum(str)<<" "<<dig(str)<<endl;
		if(sum(str)%3==0&&dig(str)==1&&zero(str)==1)
			cout<<"red"<<endl;
		else
			cout<<"cyan"<<endl;
	}
	return 0;
}