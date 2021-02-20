#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &i: a) cin >> i;
	
	// dp[i] = the largest subarray size upto position i.
	
	//vector<int> dp(n);
	//dp[0] = 1;
	int ans = 1, dp = 1;
	for(int i = 1; i < n; i++) {
		if(a[i] > a[i-1]) dp += 1; //dp[i] = dp[i-1] + 1;
		else dp = 1; //dp[i] = 1;
		ans = max(ans, dp);
	}
	
	cout << ans;
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




//1 7 2 11 15 -> 3

//i = 1 -> 7>1 true dp[1] = dp[0] + 1 = 1 + 1 = 2;
//i = 2 -> 2>7 false dp[2] = 1
//i = 3 -> 11>2 true dp[3] = dp[2]+1 = 2
//i = 4 -> 15>11 true dp[4] = dp[3]+1 = 3
