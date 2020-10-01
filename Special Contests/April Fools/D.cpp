#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int x=s.length();
	int p=int(s[x-1])-48;
	if(p%2==1)
		cout<<1;
	else
		cout<<0;
}