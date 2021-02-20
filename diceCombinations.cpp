#include<bits/stdc++.h>
using namespace std;
// CSES.fi
#define IOS ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);

#define TICK clock_t start=clock();
#define TOCK cerr<<(double)(clock()-start)/CLOCKS_PER_SEC << " secs\n";

const int mod = 1e9+7;

void solve()
{
	int n;
	scanf("%d", &n);
	vector<int> dp(n+1); // dp[i] -> #of ways to make sum i.
	dp[0] = 1;
	for(int sum = 1; sum <= n; sum++) {
		for(int value = 1; value <= 6; value++) {
			if(sum >= value) {
				dp[sum] = (dp[sum] + dp[sum-value]) % mod;
			}
		}
	}
	cout << dp[n];
}

int main()
{
	IOS
	TICK
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
		puts("");
	}
	TOCK
}
