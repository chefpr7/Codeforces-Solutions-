#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1){
		cout<<-1<<endl;
		continue;
		}
		else
		{
			cout<<2;
			for(int i=1;i<n;i++)
			cout<<3;
		}
		cout<<endl;
	}
	return 0;
}