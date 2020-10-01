 #include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	for (int q = 0; q < t; ++q) {
		string s = "";
		int n, a, b; 
		cin >> n >> a >> b;
		for (int i = 0; i < n; ++i) {
			s += char(int('a') + i % b);
		}
		cout << s << endl;
	}
	return 0;
}