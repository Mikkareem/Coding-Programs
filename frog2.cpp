#include<bits/stdc++.h>
using namespace std;
// AtCoder DP Contest B. Frog 2.

#define INF 1000000000

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> h(n);
	for(int &i: h) cin >> i;
	
	vector<int> dp(n, INF);
	dp[0] = 0;
	dp[1] = abs(h[0] - h[1]);
	for(int i = 2; i < n; i++) {
		for(int j = 1; j <= k and j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
		}
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


//to reach i -> i-k, i-k+1, ...i-2, i-1;

//i-j >= 0

//j <= i
