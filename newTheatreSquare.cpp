#include<bits/stdc++.h>
using namespace std;

int calculateCost(int cost_1, int cost_2, int squares)
{
	int cost = 0;
	if(squares & 1) {
		cost += cost_1;
		squares--;
	}
	if(squares != 0) {
		if(cost_1*squares > cost_2*(squares / 2)) {
			cost += cost_2 * (squares / 2);
		} else {
			cost += cost_1 * squares;
		}
	}
	return cost;
}

void solve()
{
	int n, m, cost_1, cost_2, total = 0;
	cin >> n >> m >> cost_1 >> cost_2;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int squares = 0;
		for(int j = 0; j < m; j++) {
			if(s[j] == '.') {
				squares++;
				continue;
			}
			total += calculateCost(cost_1, cost_2, squares);
			squares = 0;
		}
		total += calculateCost(cost_1, cost_2, squares);
	}
	cout << total;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
