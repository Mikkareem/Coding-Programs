#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> dp(n);
	dp[0] = 1;
	int plus = 4;
	for(int i = 1; i < n; i++) {
		dp[i] = dp[i - 1] + plus;
		plus += 4;
	}
	cout << dp[n - 1];
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
