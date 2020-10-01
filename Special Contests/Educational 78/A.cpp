#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string p,h;
		cin>>p>>h;
		int psize=p.size();
		// cout<<psize<<endl;
		int hsize=h.size();
		// cout<<hsize<<endl;
		int i,f=0;
		for(i=0;i<=hsize-psize;i++)
		{
			string s2(h,i,psize);
			// cout<<s2<<endl;
			sort(s2.begin(),s2.end());
			// cout<<s2<<endl;
			sort(p.begin(),p.end());
			// cout<<p<<endl;
			if(p.compare(s2)==0)
			{
				f=1;
				break;
			}

		}
		if(f==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}