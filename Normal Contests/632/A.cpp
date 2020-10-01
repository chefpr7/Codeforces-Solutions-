#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(i==0&&j==0)
				cout<<"W";
				else
				cout<<"B";
			}
			cout<<endl;
		}
	}
	return 0;
}