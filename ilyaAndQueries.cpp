#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int n = s.length();
	vector<int> dp(n + 1);
	dp[0] = 0;
	for(int i = 1; i < n; i++) {
		if(s[i] == s[i - 1]) {
			dp[i] = dp[i - 1] + 1;
		} else {
			dp[i] = dp[i - 1];
		}
	}
	
	int q;
	cin >> q;
	while(q--) {
		int l, r;
		cin >> l >> r;
		cout << dp[r - 1] - dp[l - 1];
		puts("");
	}
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


/*
 * 
 * 
	1234567
	...##..
	dp[] = {0, 1, 2, 2, 3, 3, 4};
	
	2 5 -> 1 4 -> dp[4] - dp[1] = 3 - 1 = 2
	3 5 -> 2 4 -> dp[4] - dp[2] = 3 - 2 = 1
	2 7 -> 1 6 -> dp[6] - dp[1] = 4 - 1 = 3
	4 5 -> 3 4 -> dp[4] - dp[3] = 3 - 2 = 1
	3 4 -> 2 3 -> dp[3] - dp[2] = 2 - 2 = 0




 * */
