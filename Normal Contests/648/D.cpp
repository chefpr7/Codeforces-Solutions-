#include <iostream>
#include <queue>

using namespace std;

int n, m;

void solve() {
	cin >> n >> m;
	vector<string> mp(n);
	int good = 0;
	for (int i = 0; i < n; i++) {
		cin >> mp[i];
		for (int j = 0; j < m; j++) {
			good += (mp[i][j] == 'G');
		}
	}
	if(mp[n-1][m-1]=='B'){
		cout<<"No"<<endl;
		return;
	}
	int di[] = {-1, 0, 1, 0},
		dj[] = {0, -1, 0, 1};
	int I, J;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mp[i][j] == 'B') {
				for (int d = 0; d < 4; d++) {
					I = i + di[d];
					J = j + dj[d];
					
					if (0 <= I && I < n && 0 <= J && J < m) {
						if (mp[I][J] == 'B' && (di[d] + dj[d] > 0)) continue;
						mp[I][J] = '#';
					}
				}
			}
		}
	}
	
	if (good == 0) {
		cout << "Yes" << endl;
		return;
	}
	if (mp[n - 1][m - 1] == '#') {
		cout << "No" << endl;
		return;
	}
	
	
	queue<pair<int, int>> q;
	q.emplace(n - 1, m - 1);
	vector<vector<bool>> vis(n, vector<bool>(m, false));
	vis[n - 1][m - 1] = true;
	int i, j;
	while (!q.empty()) {
		i = q.front().first;
		j = q.front().second;
		q.pop();
		
		if (mp[i][j] == 'G') good--;
		
		for (int d = 0; d < 4; d++) {
			I = i + di[d];
			J = j + dj[d];
			
			if (0 <= I && I < n && 0 <= J && J < m && !vis[I][J]) {
				q.emplace(I, J);
				vis[I][J] = true;
			}
		}
	}
	
	cout << (good == 0 ? "Yes" : "No") << endl;
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}