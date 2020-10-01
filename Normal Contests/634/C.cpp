


#include<bits/stdc++.h>
#define floop(a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define ll long long
      
using namespace std;
     
     

     
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
    	int n,t,max=0,m2=0,ans;
	vector<int> a,counter;
	cin >> n;
	floop(0,n){
		cin >> t;
		if (t>max) 
			max = t;
		a.push_back(t);
	}
	floop(0,max) 
	counter.push_back(0);
	if(n==1){
		cout << "0"<<endl;
		
	}
	else{
	int index, cnew = 0;
	floop(0,n){
		if (counter[a[i]-1] == 0) cnew++;
		counter[a[i]-1]++;
		if (counter[a[i]-1]>m2){
			m2 = counter[a[i]-1];
			index = a[i];
		}
	}
	ans = std::max(std::min(cnew-1,m2),std::min(cnew,m2-1));
	cout << ans <<endl;
    }
    }
    return 0;
}