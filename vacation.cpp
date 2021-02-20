#include<bits/stdc++.h>
using namespace std;
// AtCoder DP Contest C. Vacation.

void solve()
{
	int n;
	cin >> n;
	vector<int> dp(3, 0);
	for(int day = 1; day <= n; day++) {
		vector<int> c(3), new_dp(3);
		for(int i = 0; i < 3; i++) cin >> c[i];
		
		for(int i = 0; i < 3; i++) {//previous day
			for(int j = 0; j < 3; j++) {//current day
				if(i != j) {
					new_dp[j] = max(new_dp[j], dp[i] + c[j]);
				}
			}
		}
		dp = new_dp;
	}
	cout << max({dp[0], dp[1], dp[2]});
}

int main()
{
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
