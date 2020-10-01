#include <bits/stdc++.h>

using namespace std;
#define int long long
void solve()
{
    bool bisa;
    string s;
    cin >> s;
		int sum=0;
		while(s.size()>1){
			bisa = true;
			for (int i=1;i<s.size();i++){
				if (s[i-1] != s[i]) {
					s.erase(i-1,2);
					sum++;
					bisa = false;
				}
			}
			if (bisa) break;
		}
		if (sum % 2 == 1) cout << "DA" << "\n";
		else cout << "NET" << "\n";
}
int32_t main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
   
   return 0;
}