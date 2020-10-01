#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int count=0;
		int x=n.size();
		vector<int> arr(x);
		int i;
		for(i=0;i<x;i++)
		{arr[i]=n[i]-48;
			if(arr[i]!=0)
				count++;}
				cout<<count<<endl;
		for(i=0;i<x;i++){
			if(arr[i]!=0){
				cout<<arr[i]*pow(10,x-i-1)<<" ";
			}
		}
		cout<<endl;

	}
	return 0;
}