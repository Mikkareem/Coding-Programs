#include<bits/stdc++.h>
using namespace std;
// AtCoder DP Contest A. Frog 1.

void solve()
{
	int n;
	cin >> n;
	vector<int> h(n);
	for(int &i: h) cin >> i;	
	
	vector<int> dp(n);
	dp[0] = 0;
	dp[1] = abs(h[0] - h[1]);
	for(int i = 2; i < n; i++) {
		dp[i] = min(dp[i - 1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
	}
	cout << dp[n-1];
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
