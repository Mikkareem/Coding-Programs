#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	cout << x << ' ' << y << '\n';
	// Fill the x-th row except current cell.
	for(int i = 1; i <= m; i++) {
		if(i != y) {
			cout << x << ' ' << i << '\n';
		}
	}
	
	bool right = true; // This tells whether we traverse from right or not.
	for(int i = 1; i <= n; ++i) {
		if(i != x) { // except x-th row
			if(right) {
				for(int j = m; j > 0; j--) {
					cout << i << ' ' << j << '\n';
				}
				right = !right;
			} else {
				for(int j = 1; j <= m; j++) {
					cout << i << ' ' << j << '\n';
				}
				right = !right;
			}
		}
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		//printf("Case #%d: ", i);
		solve();
		cout << '\n';
	}
}
