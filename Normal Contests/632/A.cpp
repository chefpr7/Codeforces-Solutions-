#include<bits/stdc++.h>
using namespace std;#include<bits/stdc++.h>
using namespace std;
#define inp(k)           ll k;cin>>k;
#define in2(n, k)       ll n, k; cin>>n;cin>>k;
#define ll long long
#define dl double
#define ch char
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=a-1;i>=b;i--)
#define Godspeed                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vpl vector< pair<ll,ll> >
#define vpi vector< pair<int,int> >
#define vi vector<int>
#define vl vector<ll>
#define vdl vector<dl>
#define vch vector<char>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fr first
#define se second
#define PI 3.14159265
bool comp(pair<long long int ,long long int > &a,pair<long long int ,long long int > &b)
{
	return a.second > b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		f(i,0,a)
		{
			f(i,0,b)
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
