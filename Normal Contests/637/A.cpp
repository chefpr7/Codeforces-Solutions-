
#include<bits/stdc++.h>

#define ll long long
      
using namespace std;
     
     

     
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
    	ll n,a,b,c,d,x,y;
    	cin>>n>>a>>b>>c>>d;
    	x=n*(a-b);
    	y=n*(a+b);
    	if(y<(c-d)||x>(c+d))
    	cout<<"No"<<endl;
    	else
    	cout<<"Yes"<<endl;
    }
    
    return 0;
}