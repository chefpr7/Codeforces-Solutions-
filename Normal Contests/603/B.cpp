#include<bits/stdc++.h>
using namespace std;
int t, n;
string str[20];
int main()
{
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; ++i){
			cin >> str[i];
		}
		int ans = 0;
		for(int i=2; i<=n; ++i){
			for(int j=1; j<i; ++j){
				if(str[i]==str[j]){
					ans++;
					set<char>vis;
					for(int k=1; k<=n; ++k){
						vis.insert(str[k][0]);
					}
					for(char k='0'; k<='9'; k++){
						if(vis.count(k))continue;
						str[i][0] = k;
						break;
					}
				}
			}
		}
		cout << ans <<endl;
		for(int i=1; i<=n; ++i)cout<<str[i]<<endl;
	}
}